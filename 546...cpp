#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w;
	while(cin>>k>>n>>w)
	{
		cout<<max(0,(w*(w+1)*k/2)-n)<<endl;
	}
	return 0;
}
