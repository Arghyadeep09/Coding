#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;cin>>t;while(t--){
    int n,s,m;cin>>n>>s>>m;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    if(v[0].first>=s){
        cout<<"YES"<<endl;
        continue;
    }
    bool canshower=false;
    for(int i=1;i<n;i++){
        if(v[i].first-v[i-1].second>=s){
            canshower=true;
            break;
        }
    }
        if(canshower){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
}
return 0;
}