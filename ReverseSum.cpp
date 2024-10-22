#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int reverseSumArray(vector<int>&arr){
    int n=arr.size();

    reverse(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<reverseSumArray(arr);
return 0;
}