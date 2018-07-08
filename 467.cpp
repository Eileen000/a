#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int ans=0;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			if((y-x)>=2)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
