#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

vector<int>nextsmaller(vector<int>&arr){
    int n=arr.size();
    vector<int>result;
    for(int i=0;i<n;i++){
        int ele=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                ele=arr[j];
                break;
            }
        }
        result.push_back(ele);
    }
    return result;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>res=nextsmaller(v);
for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
}

return 0;
}