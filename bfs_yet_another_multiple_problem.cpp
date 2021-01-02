 
#include <bits/stdc++.h>
#define dbg(v) cerr << #v << " = " << v ;
 
using namespace std ;
 
int n , m ;
char digit ;
bool forbbidenDigits[ 10 ] ;
vector < int > acc_digit ;
const int N = 1e5 + 5 ;
bool vis[ N ] ;
 
string BFS(){
queue < pair < int , string > > q ;
for( int i = 0 ; i < n ; i++ ) vis[ i ] = 0 ;
for( auto i : acc_digit ){
   if( i ) q.push( { i % n , to_string( i ) } ) , vis[ i ] = 1 ;
}
 
while( q.size() ){
    int rem = q.front().first ;
    string st = q.front().second ;
    q.pop() ;
    if( !rem ){
        return st ;
    }
    for( auto i : acc_digit ){
        if( !vis[ ( ( rem * 10 ) % n + i % n ) % n ] ){
            string t = "" ;
            t += ( i + '0' ) ;
            q.push( { ( ( rem * 10 ) % n + i % n ) % n  , st + t } ) ;
            vis[ ( ( rem * 10 ) % n + i % n ) % n ] = 1 ;
        }
    }
}
return "-1" ;
}
 
int main(){
  int tc = 1 ;
  while( cin >> n >> m ){
 
  for( int i = 0 ; i < 10 ; i++ ){
    forbbidenDigits[ i ] = 0 ;
  }
 
  for( int i = 0 ; i < m ; i++ ){
     cin >> digit ;
     forbbidenDigits[ digit - '0' ] = 1 ;
  }
 
  acc_digit.clear() ;
  for( int i = 0 ; i < 10 ; i++ ){
    if( !forbbidenDigits[ i ] ) acc_digit.push_back( i ) ;
  }
 
  cout << "Case " << tc++ << ": " << BFS() << "\n" ;
  }
 
 
  return 0 ;
}

