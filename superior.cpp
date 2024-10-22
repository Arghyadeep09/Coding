#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int superior(vector<int>&arr){
    int n=arr.size();
    int cnt=0;
    int sup=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>sup)
            cnt++;
            sup=arr[i];
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
    cout<<superior(arr);
return 0;
}