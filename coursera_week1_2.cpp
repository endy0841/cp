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

void solve()
{
  int x,y,z,q,w,e;
  vi a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(all(a));
  if(a[1]==a[2])
  {
  	cout << a[0] << " " << a[1] << " " << a[2] << endl;
  }else
  cout << "NO" << endl;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int T=1;
cin >> T;
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
