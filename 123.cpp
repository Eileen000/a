#include<iostream>
using namespace std;
int n,a,b;
int ans[100000000];
int main()
{
	while(cin>>a>>b>>n)
	{
		
		if(a==0||b==0||n==0)
			break;
		ans[1]=1,ans[2]=1;
		int i=3,len=n,j=3;
		for(;j<=100;j++)
		{
			ans[i]=(a*ans[i-1]+b*ans[i-2])%7;
			if(ans[i]==1&&ans[i-1]==1)
			{
				len=i-2;
				break;
			}
			i++;	
		}
		if(n%len==0)
		  	cout<<ans[len]<<endl;
		else  	
			cout<<ans[n%len]<<endl;
	}
	return 0;
}
