#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

vector<int>nextSmaller(vector<int>&arr){
    int n=arr.size();
    vector<int>result(n,-1);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        // Pop elements from the stack while the current element is smaller
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        // If stack is not empty, the top of the stack is the next smaller element

        if(!st.empty()){
            result[i]=arr[st.top()];
        }
        st.push(i);
    }
    return result;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> res = nextSmaller(v);
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
return 0;
}