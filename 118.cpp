#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s;
		while(cin>>s)
		{
			string ans;
			ans.reserve(205);
			//int cnt=0;
				for(int i=0;i<s.length();i++)
				{
					if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
						continue;
					else 
					{
						ans+='.';
						ans+=tolower(s[i]);						
					}
						
				}
			cout<<ans<<endl;
			/*for(int i=0;i<cnt;i++)
			  cout<<ans[i];
			cout<<endl;*/
		}
		return 0;
}
