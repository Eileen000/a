#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	while(cin>>n>>m)
	{
		long long now,pre,ans=2;
		cin>>pre;
		while(--n)
		{
			cin>>now;
			int x=now-m;
			int y=abs(x-pre);
			if(y>=m)
				ans++;
			if((pre+m)!=x&&(now-pre-m))
				ans++;
			pre=now;
		}
		cout<<ans<<endl;
	}
	return 0;
}
