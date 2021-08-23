#include <bits/stdc++.h>
using namespace std;
string input1, input2;
int result;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> input1 >> input2;
	for (int i = 0; i < input2.size(); i++) {
		result = result * 10 + abs((input2[i] - '0') - (input1[i] - '0'));
	}
	cout << result << endl;

}





