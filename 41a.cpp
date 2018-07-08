#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s,r,t;
		while(cin>>s>>r)
		{
				int i=0,j=s.size()-1;
				while(i<s.size())
				{
					if(s[i++]!=r[j--])
						{
							cout<<"NO"<<endl;
							return 0;
						}
				}
				cout<<"YES"<<endl;
		}
		return 0;
}
