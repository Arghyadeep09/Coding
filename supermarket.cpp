#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

ll product(vector<int>&v){
int n=v.size();
int prod=1;
for(int i=0;i<n;i++){
    prod*=v[i];
}
return prod;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<product(v);
return 0;
}