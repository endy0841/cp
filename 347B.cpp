
#include<bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define FF           first
#define SS           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define re(i,a,b)  for(int i=a;i>b;i--)
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n;
int s=0,f=0;
cin >> n;
vi v(n);
rep(i,0,n)
{
	cin >> v[i];
	if(v[i] == i)
	f++;
}
rep(i,0,n)
{
	if(v[i]!=i)
	{ s=1;
		if(v[v[i]]==i)
	{
	
			s=2;
		break;	
	}}
}
cout << s+f;
}
