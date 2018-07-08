#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int data,f[5],ans=0;
		memset(f,0,sizeof(f));
		for(int i=0;i<n;i++)
		{
			cin>>data;
			f[data]++;
		}
		ans=f[4];
		ans=ans+(f[2]/2+(f[2]%2));
		f[2]=f[2]%2;
		ans+=f[3];
		if(f[3])
			f[1]=min(min(f[3],f[1]),(f[1]-min(f[3],f[1])));
		if(f[1])
			f[1]=max(f[2]*2,f[1]);
		ans=ans+f[1]/4;
		if(f[1]%4)
			ans++;
		cout<<ans<<endl;
	}
	return 0;
}
