#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s;
		while(cin>>s)
		{
				int cnt=0,i=0,j=0;
				string f="hello";
				for(;i<s.size();i++)
				{
					if(cnt)
						i=j;
					if(s[i]==f[cnt])
					{
						cnt++;
						for(j=i+1;j<s.size();j++)
							if(s[j]!=s[i])
								break;						
					}
					else 
						cnt=0;
					if(cnt==5)
						{
							cout<<"YES"<<endl;
							return 0;
						}
				}
				cout<<"NO"<<endl;
		}	
		return 0;
}
