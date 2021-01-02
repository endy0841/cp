#pragma GCC target ("sse2")
#pragma GCC optimization ("Ofast")
#pragma GCC optimization ("unroll-loops")

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
using namespace std;

int main()
{ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int i,n,k,k1,k2,n2,j;
cin >> n;
vi p(n),a(n),b(n);
vi x;
multiset< pair<int,int > >st[4];
for(i=0;i<n;i++)
{
	cin >> k ;
p[i]=k;
}
for(i=0;i<n;i++)
{
	cin >> k ;
a[i]=k;

}
for(i=0;i<n;i++)
{
	cin >> k ;
	b[i]=k;	
	st[a[i]].insert({p[i],i});
		st[b[i]].insert({p[i],i});
}
cin >> n2;
for(i=0;i<n2;i++)
{
	cin >> k ;
    if(st[k].size()==0)
    cout << -1 << " ";
    else
    {
        multiset< pii >:: iterator itr = st[k].begin();
        cout << itr->FF << " ";
        int q = itr->SS ;
        st[a[q]].erase(st[a[q]].find({p[q],q}));
        st[b[q]].erase(st[b[q]].find({p[q],q}));
    }}}
