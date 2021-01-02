#include<bits/stdc++.h>
using namespace std;
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
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define re(i,a,b)  for(int i=a;i>b;i--)
const long long INF=1e18;
int x,y;int f=0;
vector< vi > v(1000);
vi vis(100000);
int dfs(int n,int y)
{if(n==y)
return 1;
    for(auto i:v[n])
    {
       if(vis[i]==0)
       {
           vis[i]=1;
          if(dfs(i,y))
              return 1;
       }
    }
    return 0;
}
void solve()
{
   int n,m;
   cin >> n>> m;
   rep(i,0,m)
   {
       cin >> x >> y;
       v[x].pb(y);
       v[y].pb(x);
   }
   cin >> x >> y;
   vis[x]=1;
   if(dfs(x,y)==1)
   cout << "1" << endl;
   else
   cout << "0" << endl;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int T=1;
//cin >> T;
while(T--)
{
	solve();
}
}


/*
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9;
const ll inf_ll = 1e18;
#define all(x) (x).begin(), (x).end()
#define pb push_back
 
#ifdef ONLINE_JUDGE
#define debug(...)
#else
#include "../../debug.cpp"
#endif
 */
