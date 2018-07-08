#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long m,n,a;
		while(cin>>n>>m>>a)
		{
				long long i=0,j=0;
				while(i*a<n)
				{
						i++;
				}
				while(j*a<m)
				{
						j++;
				}
				cout<<i*j<<endl;
		}
		return 0;
}
