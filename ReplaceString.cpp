#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string func(string str,char ch1,char ch2){

    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]==ch1)
            str[i]=ch2;
        else if(str[i]==ch2)
            str[i]=ch1;
    }
    return str;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;cin>>str;
char s1,s2;cin>>s1>>s2;
cout<<func(str,s1,s2);
return 0;
}