#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;


int sumXOR(vector<int>&arr){
    int n=arr.size();
    int sum=0,exor=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            exor^=arr[i];
        }
        else{
            sum+=arr[i];
        }

    }
    return (sum-exor);
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<sumXOR(arr);
return 0;
}