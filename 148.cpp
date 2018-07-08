#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4],d,cnt=0;
	for(int i=0;i<4;i++)
		cin>>a[i];
	cin>>d;
	for(int i=1;i<=d;i++)
	{
		for(int j=0;j<4;j++)
		    if(i%a[j]==0)
		    {
		    	cnt++;
		    	break;
			}
	}
	cout<<cnt<<endl;
	return 0;
}
