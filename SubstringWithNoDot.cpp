#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int maxLength(string s){
    int n=s.size();

    int length=0,maxLength=0;
    for(int i=0;i<n;i++){
        length++;
        maxLength=length;
        if(s[i]=='.'){
            length=0;


        }
    }
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

return 0;
}