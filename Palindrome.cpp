#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

bool checkPalin(string str){
    int n=str.length();
    int l=0,r=n-1;
    while(l<r){
        if(str[l]!=str[r])
            return false;
        l++;r--;
    }
    return true;

}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;cin>>str;
if(checkPalin(str)){
    cout<<"Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome"<<endl;
}
return 0;
}