#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string upperlower(string str){
    int n=str.length();
    string s="";
    for(int i=0;i<n;i++){
        if(i%2==0){
            s.push_back(tolower(str[i]));
        }
        else{
            s.push_back(toupper(str[i]));
        }
    }
    return s;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;getline(cin,str);
cout<<upperlower(str);
return 0;
}