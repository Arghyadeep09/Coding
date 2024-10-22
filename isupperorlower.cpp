#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string isupperlower(string str){
    int n=str.length();
    int cnt1=0,cnt2=0;
    for (int i = 0; i <n; i++)
    {
        if(isupper(str[i]))
            cnt1++;
        else    
            cnt2++;
    }
    if(cnt1>cnt2){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    return str;
    
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s;cin>>s;
cout<<isupperlower(s);
return 0;
}