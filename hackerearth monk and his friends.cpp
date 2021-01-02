#pragma GCC target ("sse2")
#pragma GCC optimization ("Ofast")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int s=1,sum=1,n,i,k;
set< int >ps;
cin >> n;
for(i=0;i<n;i++)
{
	cin >> k;
	ps.insert(k);
}


vector< int >v(ps.begin(),ps.end());
if(v.size()>1)
{

cout << v[1];
}
	else
	cout << "NO";
}

