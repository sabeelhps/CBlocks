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

    node*n=new node(data);
    if(head==NULL){
        n->next=head;
        head=n;
        tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}

void print(node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void EvenAfterOdd(node*&head){

    node*i=head;
    node*j=head;

    while(j!=NULL){

        if((j->data)%2!=0){
            swap(i->data,j->data);
            i=i->next;
        }

    j=j->next;
    }
}


int main(){

    node*head=NULL;
    node*tail=NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        insert(head,tail,d);
    }

    EvenAfterOdd(head);

    print(head);



    return 0;
}