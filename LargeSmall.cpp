#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int LargeSmallSum(vector<int>&arr){
    int n=arr.size();
    if(n<=3)return 0;

    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    sort(even.rbegin(),even.rend());
    sort(odd.begin(),odd.end());

    return even[1]+odd[1];

}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<LargeSmallSum(arr);
return 0;
}