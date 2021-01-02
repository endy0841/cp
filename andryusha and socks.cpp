#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,t,q,w=0,sum=0,p=0;
	int n;
	cin >> n;
	vector< int > v;
	for(i=1;i<=(2*n);i++)
	{
		cin >> t;
	v.push_back(t);
	}
	for(i=0; i<=(2*n-1); i++)
	{
	set< int > s(v.begin(),v.begin()+i);
	q = s.size();
	if((q-w)>sum)
		sum = q-w;
	else
	{
	sum = sum-1;
	w++;
}if(sum>p)
p = sum;
}
	cout << p;
	
	return 0;
}
