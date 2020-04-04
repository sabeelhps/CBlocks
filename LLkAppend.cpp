#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void insert(node*&head,node*&tail,int data){

    if(head==NULL){
        node*n=new node(data);
        n->next=head;
        head=n;
        tail=n;
    }else{
        node*n=new node(data);
        tail->next=n;
        tail=n;
    }
return;
}

void print(node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

    cout<<endl;
}

int kElementFromLast(node*&head,int k){

    node*slow=head;
    node*fast=head;
    node*prev=NULL;

    int count=0;

    while(count<k-1){
        prev=slow;
        fast=fast->next;
        count++;
    }

    while(fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
    }

    // cout<<prev->data<<endl;
    // cout<<slow->data<<endl;
    // cout<<fast->data<<endl;

   
    fast->next=head;
    head=slow;
    prev->next=NULL;

return slow->data;
}

int main(){

    node*head=NULL;
    node*tail=NULL;
    
    int d;
    cin>>d;

    while(d!=-1){
       
        

        insert(head,tail,d);
        cin>>d;

    }

    int k;
    cin>>k;

    

   cout<<kElementFromLast(head,k)<<endl;






    return 0;
}