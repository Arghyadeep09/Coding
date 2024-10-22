#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string checker(vector<int>&nums){
    int n=nums.size();
    string str="";
    for(int i=0;i<n;i++){
        if(nums[i]%2!=0){
            str.append("Even");
        }
        else{
            str.append("Odd");
        }

    }
    return str;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cout<<checker(nums);
return 0;
}