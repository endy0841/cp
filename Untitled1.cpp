#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
	
		
		string s;
		getline(cin,s);
		
		ll l=s.size();
		
		if(s[l-1]=='o')
		cout<<"FILIPINO"<<endl;
		
        else if(s[l-1]=='u')
		cout<<"JAPANESE"<<endl;
	    
		else
	    cout<<"KOREAN"<<endl;
	}
} 


/*
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to reverse a string 
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 
  
// Driver program 
int main() 
{ 
    string str = "geeksforgeeks"; 
    reverseStr(str); 
    cout << str; 
    return 0; 
}*/

