//Maximum Subarray Sum (kadane's algo)
// kadane algo is iterative dp algorithm it calculates the maximum sum subarray ending at a particular position by using the maxumum sum subarray ending at the previous position 
#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int Kadane(vector<int>&arr){
    int n=arr.size();
    int sum=0;
     int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
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
cout<<"Maximum sum is : "<<Kadane(arr);
return 0;
}