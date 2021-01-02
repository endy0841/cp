
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
int d[100000],vis[1000000];
int n;
vector<vi> ve(100000);

void dfs(int s)
{queue<int> q;

q.push(s);
vis[s]++;
int x,f=0;
while(!q.empty())
{f++;
x=q.front();
	q.pop();
if((d[s]-f)>=0)
{
   for (int u : ve[x])
	{
	vis[ve[x][u]]++;	
	q.push(ve[x][u]);
}
	}

}
	}

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	int u,v;
	int t;
	cin >> t;
int m,r; 
while(t--)	
{ve.clear();
cin >> n >> m >> r;
rep(i,0,m)
{
	cin >> u >> v;
	ve[--u].pb(--v);
	ve[v].pb(u);
}
rep(i,0,n)
{d[i]=-1;
vis[i]=0;
}
rep(i,0,r){

	cin >> u >> v;
	d[--u]=v;
}
rep(i,0,n)
if(d[i]!=-1)
dfs(i);
int f=0;
rep(i,0,n)
{
	if(vis[i]>1)
{	cout << "No" << endl;

	f++;
		break;
}}
if(f==0)
cout << "Yes" << endl;

}
}
