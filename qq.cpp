#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).rbegin(),(a).rend()
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


void solve()
{vector<pair<int,int> > v;
    ll n,x;
    cin >> n;
    ll f=0;
    ll q;  vi a(n),b(n);
    rep(i,0,n)
        cin >> a[i];
  
    sort(all(a));
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        continue;
        else
        {
            f++;
            for(int j=i+1;j<n;j++)
            {
                if(b[i]==a[j])
                {b[j]=a[i];
                v.pb({i,j});
            }
        }
    }}
        cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].first << " " << v[i].second<< endl;
    }

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

