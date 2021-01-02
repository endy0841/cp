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
#define hell        998244353
#define rep(i,a,b)  for( i=a;i<=b;i++)
#define re(i,a,b)  for( i=a;i>=b;i--)
#define pie  2 * acos(0.0)
using namespace std;
int dp[4][4][16];
int dx[] = {0,1,-1,0,0};
int dy[] = {0,0,0,1,-1};
bool check(int i,int j)
{
    if(i==3&&j==0)
    return false;
    if(i==3&&j==2)
    return false;
    return i>=0&&i<=3&&j>=0&&j<=2;
}
int func(int i,int j,int n)
{
    if(n==1)
    return 1;
int s=0;
if(dp[i][j][n]!=0)
return dp[i][j][n];
    for(int k=0;k<5;k++)
    {int nx = i+dx[k];
    int ny = j+dy[k];
    if(check(nx,ny))
   dp[i][j][n]+=func(nx,ny,n-1);
    }
    return dp[i][j][n];
}
void solve(){
int n;
cin >> n;int s=0;
memset(dp,0,4*4*16*sizeof(dp[0][0][0]));
for(int i=0;i<=3;i++){
for(int j=0;j<=2;j++){
if(check(i,j))
 s += func(i,j,n);}}
cout << s;cout << func(3,1,2);
}
int main()
{
	
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int T=1;
 // cin >> T;
 solve();
	 
}
