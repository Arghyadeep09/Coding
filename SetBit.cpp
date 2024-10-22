#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int setBit(int num ,int i){
    int x=(num | (1<<i));//for setting the ith bit we use bitwise OR operator 
    
    return x;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int num,i;
cin>>num>>i;
cout<<setBit(num,i);
return 0;
}