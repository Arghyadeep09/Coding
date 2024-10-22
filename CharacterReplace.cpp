#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string replaceChar(string str,char ch1,char ch2){
    int n=str.length();

    for(int i=0;i<n;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
        else if(str[i]==ch2){
            str[i]=ch1;
        }

    }
    return str;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;
getline(cin,str);
char ch1,ch2;cin>>ch1>>ch2;
cout<<replaceChar(str,ch1,ch2);
return 0;
}