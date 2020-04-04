#include<iostream>
#include<stack>
using namespace std;

stack<int>s;

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
int length(node*head){

    int l=0;

    while(head!=NULL){
        l++;
        head=head->next;
    }

return l;
}

void print(node*head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void k_Reverse(node*&head,int k){
    node*temp=head;
    node*j=head;
    int i=0;
    while(i<length(head)){
        int count=k;

        while(count--){        
            s.push(temp->data);
            temp=temp->next;
        }
        count=k;

        while(!s.empty()){
            j->data=s.top();
            s.pop();
            j=j->next;
        }

    i=i+k;
    }
}


int main(){

    node*head=NULL;
    node*tail=NULL;

    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        insert(head,tail,d);
    }

    k_Reverse(head,k);

    print(head);




    return 0;
}