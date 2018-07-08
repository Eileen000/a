#include<bits/stdc++.h>
using namespace std;
int n,cnt,a,b;
int main()
{
	while(cin>>a>>b>>n)
	{
		if(a==0||b==0||n==0)
			break;
		int ans[100000002];
		ans[1]=1,ans[2]=1;
		for(int i=3;i<=100000000;i++)
		{
				ans[i]=(a*ans[i-1]+b*ans[i-2])%7;
		}
		cout<<ans[n]<<endl;
	}
	return 0;
}
