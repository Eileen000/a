#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			a[x]=i;
		}
		for(int i=1;i<=n;i++)
			{
				cout<<a[i];
				if(i<=n)
					cout<<" ";
			}
		cout<<endl;
	}
	return 0;
}