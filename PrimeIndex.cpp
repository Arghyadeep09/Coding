#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int indexfinder(int n) {
    if (n <= 1) return -1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return -1; // Not prime
    }
    return n; // Prime
}

ll primeIndexSum(vector<int>&nums){
    int n=nums.size();
    ll sum=0;
    for(int i=0;i<n;i++){
        if(i==indexfinder(i)){
            sum+=nums[i];
        }
    }
    return sum;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n;cin>>n;
vector<int>nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
cout<<primeIndexSum(nums);

return 0;
}