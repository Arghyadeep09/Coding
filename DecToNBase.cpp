#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

string DectoNBase(int n, int num)
{
    string res="";
    int q = num / n;
    vector<int>rem;
    rem.push_back(num%n);
    while (q!=0)
    {
        rem.push_back(q%n);
        q/=n;        
        
    }
    for(int i=0;i<rem.size();i++){
        if(rem[i]>9){
            res+=(char) (rem[i]-9+64)+res;
        }
        else{
            res=to_string(rem[i])+res;
        }
       
    }
     return res;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,num;
    cin>>n>>num;
    cout<<DectoNBase(n,num);
    return 0;
}