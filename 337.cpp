#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,m;
		while(cin>>n>>m)
		{
			int a[m];
			for(int i=0;i<m;i++)
				cin>>a[i];
			sort(a,a+m,greater<int>());
			int ans=10000;
			if(m==n)
			{
				cout<<a[0]-a[m-1]<<endl;
				return 0;
			}				
			for(int i=0,j=n-1;i<=m-n&&j<m;i++,j++)
				{
					int x=a[i]-a[j];
					if(x<ans)
						ans=x;
				}
			cout<<ans<<endl;
		}
		return 0;
}
