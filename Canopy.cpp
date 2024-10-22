#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

ll areafinder(int radius){
    double PI=3.14;
    double result=PI*radius*radius;

    return result;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
cout<<areafinder(n);
return 0;
}