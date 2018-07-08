#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s;
		while(cin>>s)
		{
				set<char> r;
				for(int i=0;i<s.size();i++)
				{
						r.insert(s[i]);	
				}
				if(r.size()%2)
					cout<<"IGNORE HIM!"<<endl;
				else
					cout<<"CHAT WITH HER!"<<endl;
		}
		return 0;
}
