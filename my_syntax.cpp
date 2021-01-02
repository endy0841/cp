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


void solve()
{
	int n;
cin >> n;
vector<int> a(n);
for(int i=0;i<n;i++)
{
	cin >> a[i];
}long long ss=0,s=0;
sort(all(a));int i;
int sum = accumulate(all(a),0);

if(sum==0)
{
cout << "NO" << endl; 
return;
}



for(int i=0;i<n;i++)
{if(a[i]>=0)
break;
	ss=ss+a[i];
}
if(sum>0)
reverse(all(a));
cout << "YES" <<  endl;
for(int i=0;i<n;i++)
cout << a[i] << " ";
cout << endl;


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

