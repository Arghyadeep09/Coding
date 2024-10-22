#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;cin >> t; // Read the number of test cases
      while (t--) {
        ll n;
        cin >> n; 
        ll div = n / 10; 
        ll rem = n % 10; 
        ll sum = rem + div; 
        
        cout << sum << endl; 
    }
    
    return 0;
}