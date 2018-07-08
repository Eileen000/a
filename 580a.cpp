#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
	int ans=1,cnt=1,pre,now;
	cin>>now;
	while(--n)
	{
		cin>>now;
		if(now>=pre)
			cnt++;
		else
			cnt=1;
		if(cnt>ans)
			ans=cnt;
		pre=now;
	}
	cout<<ans<<endl;
	}	
	return 0;
}
