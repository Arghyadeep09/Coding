#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

pair<int,int> findMinEle(vector<int>&arr){
    int n=arr.size();
    int mini=INT_MAX;
    int index=-1;
    for(int i=0;i<n;i++){
        
        mini=min(mini,arr[i]);
        index=i;
        
    }
    return {mini,index};
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
pair<int,int>result=findMinEle(arr);
cout<<"Min element"<<result.first<<endl;
cout<<"Index"<<result.second<<endl;
return 0;
}