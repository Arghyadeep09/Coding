#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int findelement(vector<int>&nums,int k){
    int n=nums.size();
   
    for(int i=0;i<n;i++){
        if(nums[i]==k)
        return true;
    
    }
    return false;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;cin>>k;
if(findelement(arr,k)){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}

return 0;
}