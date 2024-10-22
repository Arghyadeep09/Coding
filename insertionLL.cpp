#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef  long long ll ;
typedef unsigned long long ull ;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int value){
        data=value;
        next=nullptr;
    }

};


signed main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    Node *head;
    head=nullptr;


    int arr[]={1,2,3,4,5};

    for(int i=0;i<arr.size();i++){
        if(head==nullptr){
            head=new Node(arr[i]);
        }
        //linked list exist karti hai jab 

        else{
            Node *temp=new Node(arr[i]);
            temp->next=head;
            head=temp ;
        }
    }
return 0;
}