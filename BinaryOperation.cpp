#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string binaryOperation(string s1,string s2,string op){
    string res="";
    int n=s1.length();
    int m=s2.length();
    if(op=="AND"){
        for(int i=0;i<n;i++){
            if(s1[i]=='1' && s2[i]=='1'){
                res+='1';
            }
            else{
                res+='0';
            }
        }
    }
    else if(op=="OR"){
        for(int i=0;i<n;i++){
            if(s1[i]=='1' || s2[i]=='1'){
                res+='1';
            }
            else{
                res+='0';
            }
        }
    }
    else if(op=="XOR"){
        for(int i=0;i<n;i++){
            if(s1[i] ==  s2[i]){
                res+='0';
            }
            else{
                res+='1';
            }
        }
    }
    return res;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s1,s2,op;
cin>>s1>>s2>>op;
cout<<binaryOperation(s1,s2,op);
return 0;
}