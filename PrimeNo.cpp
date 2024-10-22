//Seive of Eratothenes

#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

bool checkPrime(int n){
  if(n<=1){
    return false;
  }
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
        return false;
    }
  }
  return true;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
if(checkPrime(n)){
    cout<<"Prime"<<endl;
}
else{
    cout<<"Not Prime"<<endl;
}

return 0;
}