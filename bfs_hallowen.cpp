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
int n,m,k;
vector< vector<int> > v(10001);
 int l[1001][1001];
 bool check(int x,int y)
 {
       return x<=n-1&&x>=0&&y<=m-1&&y>=0;
      
 }

void bfs()
{queue<pii > q;
int x=0,y=0;
q.push({x,y});

 int nx,ny,xx,yy;
 while(!q.empty())
 {xx =q.front().first;
yy =q.front().second;
q.pop();
for(int i=0;i<4;i++)
        {
            nx = dx[i]+xx;
            ny = dy[i]+yy;
               if(check(nx,ny))
            if(l[nx][ny]>l[xx][yy])
            {
                q.push({nx,ny});
                
            if(v[xx][yy]!=v[nx][ny])
            l[nx][ny]=l[xx][yy]+1;
            else
            l[nx][ny]=l[xx][yy];
        }}
    
}}
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,f=0;
cin >> t;
int x;
while(t--){
cin >> n >> m;
f++;
    rep(i,0,n)
    {
    rep(j,0,m)
    {
        l[i][j]=10000;
        cin >> x;
        v[i].pb(x);
    }
}l[0][0]=0;
bfs();
cout << "Case "<< f << ": " << l[n-1][m-1] << endl;
rep(i,0,n)
v[i].clear();
}}
