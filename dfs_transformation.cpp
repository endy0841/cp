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
ll n1,n2,t;
vector<ll> v;
int f=0;

int dfs(ll s) {
if(s==n2){
    v.pb(s);
f=1;
return 1;
}
if(s>n2)
return 0;
if(dfs(2*s)||dfs(10*s+1))
{
    v.pb(s);
    return 1;
}
}






int main()
{int l=0;
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin >> n1 >> n2;
dfs(n1);
if(!f)
cout << "NO";
else
{
    cout << "YES" << endl;
    cout << v.size() << endl;
    sort(v.begin(),v.end());
rep(i,0,v.size())
    cout << v[i] << " ";
}}
