#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s,t;
		while(cin>>s>>t)
		{
			if(s==t)
				{
					cout<<"NO"<<endl;
					return 0;
				}
			sort(s.begin(),s.end());
			sort(t.begin(),t.end());
			if(s!=t)
				cout<<"NO"<<endl;
			else if(s==t)
				cout<<"YES"<<endl;
		}
		return 0;
 } 
