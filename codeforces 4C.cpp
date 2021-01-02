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
int n,i;
cin >> n;
string x;
 
map< string,int >m;
	cin >> x;
	m.insert({x,0});
	cout << "OK" << endl;
for(i=1;i<n;i++)
{
	cin >> x;
	if(m.find(x)!=m.end())
{
		cout <<x<<m[x]+1 << endl;
	m[x]++; 
}else
cout << "OK" << endl;
m.insert({x,0});
}}
