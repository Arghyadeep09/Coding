#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

void reverseTriangle(int n){
    for(int i=0;i<n;i++){

        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<< "*";
        }
        cout<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
reverseTriangle(n);
return 0;
}