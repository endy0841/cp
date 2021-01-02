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
int n,e,m,t;
vector<vector<pair<int,int> > > v(1000);


int bfs(int x)
{queue<int > q;
  vi l(100000,hell);
    vi  vis(100000,0);
vis[x]=1;
l[x]=0;
q.push(x);
 int nx,ny,xx,yy;
 while(!q.empty())
 {xx =q.front();

q.pop();
for(auto i:v[xx])
{
    if(!vis[i.first]){
    q.push(i.first);
    vis[i.first]=1;}
    l[i.first]=min(l[i.first],l[xx]+i.second);
    
}

        }return l[e];
    }
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int x,y,z,f=0;
cin >> n >> e >> t >> m;
int s= 0;
    rep(i,0,m)
    {
    cin >> x >> y >> z;
    v[x].pb({y,z});
	}

	rep(i,1,n+1)
	{
			if(bfs(i)<=t)
			f++;
		}
	
	cout << f;
		}

