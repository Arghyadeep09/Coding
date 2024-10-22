#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string moveHypen(char str[],int n){
    vector<Char>v1;
    vector<Char>v2;
   

    for(int i=0;i<n;i++){
        if(str[i]=="-")v1.push_back(str[i]);
        else v2.push_back(str[i]);
    }
    vector<Char>res(v1.size()+v2.size());
    return merge(v1.begin(),v1.end(),v2.begin(),v2.end());


}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
Char str[n];
for(int i=0;i<str.size();i++){
    
}
return 0;
}