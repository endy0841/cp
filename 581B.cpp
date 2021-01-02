
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
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,b=0;
int i;
cin >> n;
vi v(n);
vi vv(n);
rep(i,0,n)
{
	cin >> v[i];
}
for(i=n-1;i>=0;i--)
{if(v[i]>b)
vv[i]=0;
else
vv[i]=b-v[i]+1;
    b= max(b,v[i]);
 }   rep(i,0,n)
{
	cout << vv[i] << endl;

}
}

