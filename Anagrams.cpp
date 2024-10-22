#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

bool checkAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return "No";
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        return "Yes";
    }
    else{
        return "No";
    }
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s1,s2;cin>>s1>>s2;
if(checkAnagram(s1,s2)){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
return 0;
}