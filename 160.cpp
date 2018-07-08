#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n)
		{
			int a[n],sum=0,ave=0;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			ave=sum/2;
			sort(a,a+n,greater<int>());
			int ans=0,tem=0;
			while(tem<=ave)
			{
				tem+=a[ans++];
			}
			cout<<ans<<endl;
		}
		return 0;
}
