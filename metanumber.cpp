#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;
int metanumber(int n){
    int cnt=0;
    for(int i=0;i<=n;i++){
        if((i%1==0)&& (i%2==0)&&(i%4==0)&&(i%8==0)&&(i%10!=0))
            cnt++;
    }
    return cnt;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
cout<<metanumber(n);

return 0;
}