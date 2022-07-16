#include<iostream>
 
#include<math.h>
 
using namespace std;
 
int main()
 
{
 
 
 
    long long int n,i;
 
    while(cin>>n)
 
    {
 
        for(i=2; i*i<=n; i++)
 
        {
 
            while(n%(i*i)==0)
 
            {
 
                n=n/i;
 
            }
 
        }
 
         cout<<n<<endl;
 
    }
 
 
 
 
 
}