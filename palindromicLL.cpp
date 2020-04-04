#include<iostream>
using namespace std;

class node{
public:

    int data;
    node*next;
    node*prev;

    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
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
        n->prev=tail;
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
int length(node*head){

    int l=0;

    while(head->next!=NULL){
        l++;
        head=head->next;
    }

return l;

}

bool check(node*head,node*tail){

    node*s=head;
    node*l=tail;

    int i=1;
    int j=length(head);
    while(i<=j){

        if(s->data!=l->data){
            return false;
        }
        i++;
        j--;
        s=s->next;
        l=l->prev;

    }
    if(i>j){
        return true;
    }
    return false;

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

    // print(head);

    if(check(head,tail)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }


    return 0;
}