
#include<bits/stdc++.h>

#define ll          long long int 
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
void solve();
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
{mi m;
ll a,b,q,f=0;
cin >> a >>  b >> q;
rep(i,a,((a*b)+1)){
if((i%a)%b != (i%b)%a){
++f;
m[i] = f;
}
else
m[i]=f;}
while(q--)
{ll t = a*b;
	ll l,r;
	cin >> l >> r;
	ll p = (r-l+1)/(a*b);
	if(p==0)
	cout << m[r]-m[l-1] << " ";
	else{
	
	ll y = (r-l+1)%(a*b);
	ll o = r%(a*b);
	ll u =m[o];
	ll d=0;
	if(o<y)
	{
	ll g = l%(a*b);
	d = m[a*b]-m[a*b-y+o];
}y=y-1;if(o>y)
u=m[y];

cout << p*f+u+d << " ";}
}cout << endl;
}
