
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
int n,s,a,d,r,f=0;
cin >> n;
rep(i,0,n)
{
	cin >> r; 
	if(r==25)
	s++;
	if(r==50)
    {
	a++;
	s--;
}
    if(r==100)
   {s--;
   a--;
	 d++;
}
if(s<0||a<0)
{
	cout << "NO";
	f++;
	break;
}
}if(f==0)
cout << "YES";
}

