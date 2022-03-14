#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool B[109][109], A[109][109], C[109][109];
ll n, m;
void sol()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> B[i][j];
            A[i][j] = 1;
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (B[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    A[i][k] = 0;
                }
                for (int k = 0; k < n; k++)
                {
                    A[k][j] = 0;
                }

            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j])
            {
                for (int k = 0; k < n; ++k)
                {
                    C[k][j] = 1;
                }
                for (int k = 0; k < m; ++k)
                {
                    C[i][k] = 1;
                }

            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (C[i][j] != B[i][j])
            {
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES"<<endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	sol();
}