#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n)
		{
			int now=0,ans=0;
			for(int i=0;i<n;i++)
			{
					int x,y;
					cin>>x>>y;
					now+=(y-x);
					if(now>ans)
						ans=now;
			}
			cout<<ans<<endl;
		}
		return 0;
}
