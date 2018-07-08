#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,k;
		while(cin>>n>>k)
		{
				int a[110],ans=k;
				for(int i=0;i<n;i++)
				{	
					cin>>a[i];
				}
				if(a[k-1]==0)
					{
						for(int i=k-1;i>=0;i--)
						{
							if(a[i]==0)
								ans--;
						}
					}
				else 
					for(int i=k;i<n;i++)
					{
						if(a[i]==a[k-1])
							ans++;
					}
				cout<<ans<<endl;
		}
		return 0;
}
