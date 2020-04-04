#include<iostream>
#include<stack>
using namespace std;

stack<int>s;

void deleteAtMid(int n,int curr=0){

    if(s.empty()||curr==n){
        return;
    }

    int x=s.top();
    s.pop();

    deleteAtMid(n,curr+1);

    if(curr!=n/2){
        s.push(x);
    }
}

int main(){ 

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        s.push(d);
    }

    deleteAtMid(n);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}