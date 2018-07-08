#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[3],ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[0]>>a[1]>>a[2];
			if((a[0]+a[1]+a[2])>=2)
				ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
