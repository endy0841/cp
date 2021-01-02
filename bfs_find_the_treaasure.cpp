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
char ch;
vector<vector<char> > v(10000001);
 int l[1000001][1000001];
 bool check(int x,int y)
 {
      return x<=n-1&&x>=0&&y-1<=m&&y>=0;
      
 }

void bfs(int x, int y)
{queue<pii > q;
int vis[1000000][10000000];
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
            if(!vis[nx][ny])
            if(check(nx,ny) && v[nx][ny]!='#')
            {if(v[nx][ny]=='s')
            l[nx][ny]=min(l[nx][ny],l[xx][yy]+1);
                q.push({nx,ny});
                vis[nx][ny]=1;
            if(ch=='x')
            break;}
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);


cin >> n >> m >> k;
int str,stc,tx,ty;

    rep(i,0,n)
    {
    rep(j,0,m)
    {l[i][j]=hell;
        cin >> ch;
        v[i].pb(ch);
        if(ch == 'x'){tx=i;
        ty=j;
        
        }
        if(ch=='@'){
    str=i;
    stc=j;
    }}
}l[str][stc]=0;
ch='@';
bfs(str,stc);
if(l[tx][ty]<=(k/2))
cout << "yes";
else
cout << "no";
}
