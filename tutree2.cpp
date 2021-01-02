#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>> s1 >> s2;
    sort(s2.begin(),s2.end());;
    int p = s2.length();
    for(int i=0;i<s1.length()-p+1;i++)
    {
        string pp = s1.substr(i,p);
         sort(pp.begin(),pp.end());;
        if(pp == s2)
        cout << s1.substr(i,p) << " present at index " << i << endl;
    }
}
