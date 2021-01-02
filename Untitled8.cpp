#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int vis[1000001];
int re[1000001];

bool f(int p)
{	if(p==1)
	return a[p]=true;
    int q=p;int sum=0;
if(vis[p])
return a[p];
vis[p]=1;
	while(q)
	{
		sum=sum+(q%10)*(q%10);
		q=q/10;
	}

	return a[p]=f(sum);
}
int main()
{
	ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
 int t;
  cin >> t;
  	for(int i=1;i<1000001;i++)
	{
		if(!vis[i])
		{
		f(i);
		
	    re[i]=re[i-1]+i;
	    }else
	    re[i]=re[i-1];
	}
	
  while(t--)
  {
  	int l; int r;
	  long long sum=0;
  	cin >> l >> r;
	  cout << re[r]-re[l-1] << endl;
  }
}
