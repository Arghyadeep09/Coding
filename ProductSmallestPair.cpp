#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int product(int sum,vector<int>&arr,int n){
    int ans;
    if(n<2){
        return -1;
    }
     sort(arr.begin(),arr.end());
     if((arr[0]+arr[1])<=sum){
        ans= arr[0]*arr[1];
     }
     else{
        ans= 0;
     }
     return ans;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int sum;cin>>sum;
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<product(sum,arr,n);
return 0;
}