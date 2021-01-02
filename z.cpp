
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
int x,cc,c,f;
void solve();
void dfs(int n, int a)
{if(cc==n-1&&c==a)
f++;
if(cc>n-1||c>a)
return;
    for(int i=0;i<=1;i++)
    {int p,l,m;
    p=c;
    l=cc;
    m=x;
        if(x!=i){
        x=i;
        c++;}cc++;
        dfs(n,a);
        c=p;
        cc=l;
        x=m;
    }
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int T;
 cin >> T;
 while(T--)
 {solve();
}	 
}
void solve()
{ int n,a,d;
x=0;f=1;
a=a-1;
c=0;
cc=1;
cin >> n >> a;
dfs(n,a); 
cout << 2*f << endl;
}
