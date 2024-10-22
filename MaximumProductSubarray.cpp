#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int maxProduct(vector<int>&arr){
    int n=arr.size();
    int product=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        product*=arr[i];

        maxi=max(maxi,product);
        if(product<0){
            product=1;
        }
    }
    return maxi;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Maximum product is : "<<maxProduct(arr);
return 0;
}