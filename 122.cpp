#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int f[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	while(cin>>n)
	{
		int k=n,flag=1;
		while(k)
		{
			int now=k%10;
			if(now!=4||now!=7)
				{
					flag=0;
					break;
				}
			k/=10;
		}
		if(k>0)
		{
			for(int i=0;i<14;i++)
				if(n%f[i]==0)
					{
						flag=1;
						break;
					}
		}
		if(flag)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}
