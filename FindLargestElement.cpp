#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int target(vector<int>&arr,int k){
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==k)return mid;

        if(arr[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,k;cin>>n>>k;
vector<int>arr(n);
for(int &x:arr){
    cin>>arr[x];
}
if(target(arr,k)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}
return 0;
}