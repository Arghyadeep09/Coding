#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int findAverage(vector<int>&arr){
    int n=arr.size();
    float cnt=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            cnt++;
            sum+=arr[i];
        }

    }
    return ceil(sum/cnt);
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<findAverage(arr);
return 0;
}