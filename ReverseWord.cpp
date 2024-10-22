#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

vector<string>reverseWord(string str){
    int n=str.length();
    vector<string>res;
    for(int i=0;i<n;i++){
        res.push_back(str[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

return 0;
}