#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

pair<int,int> pairSum(vector<int>&arr,int sum){
    int n=arr.size();
    int a,b;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==sum){
            return {arr[i],arr[j]};
        }
       }
    }
    return {-1,-1};
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum;cin>>sum;
pair<int,int>result=pairSum(arr,sum);
cout<<result.first<<endl;
cout<<result.second<<endl;
return 0;
}