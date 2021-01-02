#include<set>
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
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define re(i,a,b)  for(int i=a;i>b;i--)
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int m,n;
cin >> n >> m;
multiset<int> v(100000);
multiset<int> v2(100000);
rep(i,0,n)
{
	v[i]=i%5;
}
rep(i,0,m)
{
	v2[i]=i%5;
}
t = min(v.count(0),v2.count(0))+min(v.count(1),v2.count(4))+min(v.count(2),v2.count(3))+min(v.count(3),v2.count(2))+min(v.count(4),v2.count(1));
}
