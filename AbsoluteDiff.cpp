#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int absoluteDiffSum(vector<int>&arr,int k){
    int n=arr.size();
    int sum1=0,sum2=0;
    for(int i=0;i<k;i++){
        sum1+=arr[i];
    }
    for(int i=k+1;i<n;i++){
        sum2+=arr[i];
    }

    return (abs(sum2)-abs(sum1));

}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
int k;cin>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"The absolute difference is  : "<<" "<<absoluteDiffSum(arr,k)<<endl;
return 0;
}