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
const int dx[4]={1,0,0,-1};
const int dy[4]={0,1,-1,0};
int n,m,s=0;
vector< vector<int> > v(10001);
 int l[1001][1001];
 bool check(int x,int y)
 {
       return x<=n-1&&x>=0&&y<=m-1&&y>=0;
      
 }

int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,f=0;
cin >> t;
int x,nx,ny,mt;
while(t--){
cin >> n >> m;
f++;
    rep(i,0,n)
    {
    rep(j,0,m)
    {
       
        cin >> x;
        v[i].pb(x);
    }
}rep(i,1,n-1)
rep(j,1,m-1)
{mt=hell;
	for(int k=0;k<4;k++)
	{
		nx=i+dx[k];
		ny=j+dy[k];
		if(check(nx,ny))
		mt=min(mt,v[nx][ny]);
	}
	if(mt>v[i][j]){
	s=s+mt-v[i][j];
		v[i][j]=mt;
}}cout << s << endl;
}
}






