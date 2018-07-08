#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s){
			int ans=0,cnt=0;
			for(int i=1;i<s.length();i++){
					if(s[i]!=s[i-1]){
						if(cnt>=6)
							ans++;
						cnt=0;
					}
					if(s[i]==s[i-1])
						cnt++;
			}
			if(cnt>=6)
				ans++;
			if(ans>0)
				cout<<"YES"<<endl;
			if(ans==0)
				cout<<"NO"<<endl;
	}
	return 0;
}
