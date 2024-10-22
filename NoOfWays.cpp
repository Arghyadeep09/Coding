#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int paths(int i,int j,int n){
    if(i<0||j<0||i>=n)return 0;
    if(i==n-1&& j==n-1)return 1;
    int ways=0;
    ways+=paths(i+1,j,n);
    ways+=paths(i,j+1,n);
    return ways;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
cout<<paths(0,0,n);
return 0;
}