
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
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define re(i,a,b)  for(int i=a;i>b;i--)
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
if(k==n/2){
rep(i,1,n+1)
cout << i << " " ;
return;
}
if(k<n/2)
{
    cout << -1;
    return;
}
int h = k-n/2+1;
cout << k+1-n/2;
cout << " " << 2*(k+1-n/2) << " ";
rep(i,1,n-1)
cout << i << " ";
}


int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);int T;
//while(T--)
{solve();
}
}
