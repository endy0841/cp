#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int in =1;
    while(in<=n)
    {
        for(int i=in;i<=n;i++)
        {
            cout << i << " ";
        }
        cout << endl;
        in++;
    }
    in =in-2;
    while(in>0)
    {
        for(int i=in;i<=n;i++)
        {
            cout << i << " ";
        }
        cout << endl;
        in--;
    }
    
}

