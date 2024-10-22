#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int check(string str){
    ll sum=0;
    int n=str.length();
    vector<int>v;
    vector<int>vec;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){

            v.push_back((str[i])-'0'); //1 2 
        }
        else 
        {
            int asci=(int)(str[i]);  //98
            vec.clear(); 
            while(asci!=0){ //98 !=0
            int rem=asci%10; //rem = 98%10 = 8
            vec.push_back(rem); //8 9 
            asci/=10;
            }
            sort(vec.rbegin(),vec.rend()); //9 8 

            v.push_back(vec[0]); //1 2 9  9
        }
    }
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;cin>>str;
cout<<check(str);
return 0;
}