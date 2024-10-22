#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

int findCount(int arr[],int l,int num,int diff){
    int count=0;
    for(int i=0;i<l;i++){
        if(abs(num-arr[i])<=diff)count++;
        
    }
       if(count>0)return count;
       else return -1;
}
signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the array elements "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int num;cin>>num;
int diff;cin>>diff;
cout<<findCount(arr,n,num,diff);
return 0;
}