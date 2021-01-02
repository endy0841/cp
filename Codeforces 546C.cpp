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
int n,i,q,s=0;
cin >> n;
stack< int > s1;
stack< int > s2;
int z,x;
int k1,w=0;
cin >> k1;
for(i=0;i<k1;i++)
{
cin >> q;
	s1.push(q);
}
int k2;
cin >> k2;
for(i=0;i<k2;i++)
{
cin >> q;
	s2.push(q);
}
z = s1.top();
x = s2.top();
while(!s1.empty() && !s2.empty())
{
	if(s1.top()>s2.top())
	{
			s1.push(s2.top());
				s1.push(s1.top());
		s1.pop();
		s2.pop();
	s++;
	}
	else
	{
			s2.push(s1.top());
				s2.push(s2.top());
		s1.pop();
		s2.pop();
		s++;
	}
	if(s1.top()==z && s2.top()==x)
	{
			w=1;
		break;	
	}
}
if(w==0)
{
cout << s << " ";
if(!s1.empty())
cout << 1;
else
cout << 2;
}
else
cout << -1;
}

