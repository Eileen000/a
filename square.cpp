#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long m,n,a;
		while(cin>>n>>m>>a)
		{
				long long i,j;
				if(n%a)
					i=n/a+1;
				else 
					i=n/a;
				if(m%a)
					j=m/a+1;
				else 
					j=m/a;
				long long ans=i*j;
				cout<<ans<<endl;
		}
 		return 0;
}
