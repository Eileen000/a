#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int ans[1000000];
int main()
{
	while(cin>>a>>b>>n)
	{
		
		if(a==0||b==0||n==0)
			break;
		ans[1]=1,ans[2]=1;
		int flag=1,i=3,len=0,j=3;
		for(;j<=100000000;j++)
		{
			ans[i]=(a*ans[i-1]+b*ans[i-2])%7;
			if(ans[i]==1&&ans[i-1]==1)
			{
				int x=1,y=1;
				for(j=3;j<=i-2;j++)
				{
					int now=(a*x+b*y)%7;
					if(now!=ans[j]) 
						break;
					y=x;
					x=now;
				}
				if(j>i-2)
				{
					flag=0;
					len=i-2;
				}
				flag=0;
				len=i-2;
				break;
			}
			i++;	
		}
		cout<<ans[n%len]<<endl;
	}
	return 0;
}
