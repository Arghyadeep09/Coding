#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

ll defSum(ll n,ll m){
    int sum1=0,sum2=0;
    for(int i=1;i<=m;i++){
        if(i%n!=0)sum1+=i;
        else sum2+=i;
    }
    return sum1-sum2;
}

signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,m;
cout<<"Enter the n and m "<<endl;
cin>>n>>m;
cout<<"The difference is :"<<defSum(n,m);
return 0;
}