#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int countOccurance(vector<int>&nums,int k){
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==k)cnt++;
    }
    return cnt;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;cin>>k;
cout<<"The count is "<<countOccurance(arr,k);
return 0;
}