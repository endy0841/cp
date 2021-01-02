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
vector<vector<int> > v(1001);
 int str,stc,tx,ty;
 bool check(int x,int y)
 {
      return x<=n-1&&x>=0&&y<=m-1&&y>=0;
 }

int bfs(int x, int y)
{queue<pii > q;
vector<vector<int> > vis(1001);
vector<vector<int> > l(1001);
rep(i,0,n)
rep(j,0,m)
{vis[i].pb(0);
l[i].pb(0);
}
vis[x][y]=1;
l[x][y]=0;
q.push({x,y});
 int nx,ny,xx,yy;
 while(!q.empty())
 {xx =q.front().first;
yy =q.front().second;
q.pop();
if(xx==str && yy==stc)
break;
for(int i=0;i<4;i++)
        {
            nx = dx[i]+xx;
            ny = dy[i]+yy;
         
            if(check(nx,ny) && v[nx][ny]!=84 && !vis[nx][ny])
            {
            l[nx][ny]=l[xx][yy]+1;
                q.push({nx,ny});
                vis[nx][ny]=1;
           }
        }
    }
return l[str][stc];
}
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

int x;
cin >> n >> m ;
int le[1000][1000];

int s= 0;
    rep(i,0,n)
    {
    rep(j,0,m)
    {
    cin >> ch;
        x= (int)ch;
        v[i].pb(x);
       if(x==69){
       str=i;
       stc=j;}  
	    if(x==83)
        {
        	tx=i;
        	ty=j;
		}
		
	}}
	le[tx][ty]=bfs(tx,ty);
	rep(i,0,n)
	{
		rep(j,0,m)
		{
			if(v[i][j]>=1&&v[i][j]<=9){
			le[i][j]=bfs(i,j);
			if(le[i][j]<=le[tx][ty])
			s=s+v[i][j];
		}}}
	
		cout << s;
		}

