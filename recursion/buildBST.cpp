#include<iostream>
#include<algorithm>
using namespace std;

class node{
public:

    int data;
    node*left;
    node*right;

    node(int d){

        data=d;
        left=NULL;
        right=NULL;
    }

};

node* buildTree(int *a,int s,int e){

   
    if(s>e){
        return NULL;
    }

    int m=(s+e)/2;

    node*root=new node(a[m]);

    root->left=buildTree(a,s,m-1);
    root->right=buildTree(a,m+1,e);

return root;
}

void preorder(node*root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // sort(a,a+n);
        node*root=buildTree(a,0,n-1);
        preorder(root);
        cout<<endl;





    }



    return 0;
}