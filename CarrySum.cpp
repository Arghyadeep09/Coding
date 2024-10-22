#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;


int carrySum(int n1,int n2){
    ll sum;int cnt=0;
    while((n1!=0)&&(n2!=0)){
        int r1=n1%10; //567%10 = 7   56%10= 6  5%10 = 5 
        int r2=n2%10; //599%10 = 9   59%10= 9  5%10=5

        sum=r1+r2; // 7+9 = 16  6+9 = 15 5+5=10

        if(sum>9){ //16>9 true !!  15>9 true !!  10>9 true!!
            cnt++; //cnt=1  cnt = 1+1=2 ; cnt=2+1=3
        }

        n1=n1/10; // 567/10 = 56 56/10=5 
        n2=n2/10; // 599/10= 59  59/10=5

        sum=0; //sum=0
    }
    return cnt;

}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n1,n2;cin>>n1>>n2;
cout<<"The no. of carry is  : "<<carrySum(n1,n2);
return 0;
}