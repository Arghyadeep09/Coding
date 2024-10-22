#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

bool check(vector<int>&arr,vector<int>&nums){
    int n=arr.size();int m=nums.size();
    if(n!=m)return false;
    sort(arr.begin(),arr.end());
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(arr[i]==nums[i]){
            return true;
        }
    }
    return false;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;int m;cin>>m;
vector<int>arr(n);vector<int>nums(m);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++){
    cin>>nums[i];
}
cout<<check(arr,nums);
return 0;
}