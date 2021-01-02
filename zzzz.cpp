
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi         map<int,int>
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
vi v(100001,0);
vi dp(100001,0);
ll ffff(ll n)
{ll maxx =0;
    if(n==1)
    return v[1];
    if(dp[n]!=0)
    return dp[n];
    for(ll i=n;i>=1;i--)
    {
        if(v[n]-v[i]==n-i)
        maxx=max(maxx,ffff(i)+v[n]);
    } dp[n]=maxx;
    return dp[n];
}


void solve(){
	int x;ll N;
	cin >> N;
	rep(i,1,N+1){
	    cin >> v[i];
	}dp[1]=v[1];
	ffff(N);
	cout << *max_element(all(dp));
	}
	
	
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
  solve();
}
