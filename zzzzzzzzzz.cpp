#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n>0)
    cout << n << endl;
    else
    {
        int a = n%10;
        int b = n%100/10;
        n=n/100;
        if(a>=b)
            cout << n*10+a;
            else
            cout << n*10+b;
    }
}
