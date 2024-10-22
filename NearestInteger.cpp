#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int nearestInteger(int num,int n ){
    int r=num%n;
    if(r<(n+1)/2){
        return num-r;
    }
    return num+(n-r);
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int num,n;cin>>num>>n;
cout<<nearestInteger(num,n);
return 0;
}