#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n],min=1000,max=0,l,r;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
			{
				max=a[i];
				l=i;
			}
			if(a[i]<=min)
			{
				min=a[i];
				r=i;
			}
		}
		int ans=l+n-1-r;
		if(l>r)
			ans--;
		cout<<ans<<endl;	
	}
	return 0;
}
