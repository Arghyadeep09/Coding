#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

string rev(string &str){
   
 reverse(str.begin(),str.end());
 return str;

}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string str;getline(cin,str);
cout<<rev(str);
return 0;
}