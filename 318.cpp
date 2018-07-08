#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long n,m;
		while(cin>>n>>m)
		{
			long long mid,ans;
			if(n%2)
			{
				mid=n/2+1;	
			}	
			else 
				mid=n/2;
			if(m<=mid)
				ans=2*m-1;
			else if(m>mid)
			{
				m-=mid;
				ans=2*m;
			}
			cout<<ans<<endl;
		}
		return 0;
}
