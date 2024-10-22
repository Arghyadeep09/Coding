#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;
int operations(int n){
    int ans;
    if(n%2!=0 && n>10){
        ans=n/2;
    }
    else if(n%2==0){
        ans=((n-2)/2);
    }
    else if(n<10){
        ans=n;
    }
    return ans;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
cout<<operations(n);

return 0;
}