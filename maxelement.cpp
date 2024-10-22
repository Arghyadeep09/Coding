#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int maxele(vector<int>&arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            maxindex=i;
        }
    }

    return maxindex;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int maxelement=maxele(v);

cout<<v[maxelement]<<endl;
cout<<maxelement;
return 0;
}