#include<bits/stdc++.h>
using namespace std;
bool a[1000001];
int vis[1000001];
bool f(int p)
{int q=p;int sum=0;
if(vis[p])
return a[p];
	while(q)
	{
		sum=sum+(q%10)*(q%10);
		q=q/10;
	}
	if(sum==1)
	return a[p]=true;
	return a[p]=f(q);
}

int main()
{
	

  int t;
  cin >> t;
  	for(int i=1;i<1000001;i++)
	{
		if(!vis[i])
		f(i);
	}
  while(t--)
  {
  	int l; int r;
	  long long sum=0;
  	cin >> l >> r;
  	for(int i=l;i<r;i++)
  	{
  	    if(a[i])
		  sum=sum+i;	
	  }
	  cout << sum << endl;
  }
}
