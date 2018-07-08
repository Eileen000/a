#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		while(cin>>n)
		{
			int ans=0;
			if(n%5)
				ans=n/5+1;
			else if(ans%5==0)
				ans=n/5;
			cout<<ans<<endl;			
		}
		return 0;
}
