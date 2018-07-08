#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		set<int>s;
		int x,y,l;
		cin>>x;
		for(int i=0;i<x;i++)
		{
			cin>>l;
			s.insert(l);
		}
		cin>>y;
		for(int i=0;i<y;i++)
        {
			cin>>l;
			s.insert(l);
		}
		if(s.size()<n)
			cout<<"Oh, my keyboard!"<<endl;
		else if(s.size()==n)
			cout<<"I become the guy."<<endl;
	}
	return 0;
}
