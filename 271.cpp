#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
			int i;
			for(i=n+1;i<10000;i++)
			{
				int k=i;
				set<char>s;
				while(k)
				{
					char c=k%10+'0';
					k/=10;
					s.insert(c);
				}
				if(s.size()==4)
					break;
			}
			cout<<i<<endl;
	}
	return 0;
}
