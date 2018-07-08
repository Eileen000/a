#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long k,n,w;
	while(cin>>k>>n>>w)
	{
			long long sum=0;
			for(int i=1;i<=w;i++)
			{
				long long x=i*k;
				sum+=x;
			}
			if(n>=sum)
				cout<<0<<endl;
			else if(n<sum)
				cout<<sum-n<<endl;
	}
	return 0;
}
