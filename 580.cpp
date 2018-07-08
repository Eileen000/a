#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans=1;
		for(int i=0;i<n-1;i++)
		{
			int cnt=1;
			for(int j=i;j<n-1;j++)
			{
				if(a[j+1]>=a[j])
					cnt++;
				else
					break;
			}
			if(cnt>ans)
				ans=cnt;
		}
		cout<<ans<<endl;
	}
	return 0;
}
