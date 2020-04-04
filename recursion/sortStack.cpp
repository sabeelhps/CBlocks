#include<iostream>
#include<stack>
using namespace std;

stack<int>s;

void sortedStack(stack<int>&s,int x){

    if(s.empty()||x>s.top()){
        s.push(x);
        return;
    }

    int y=s.top();
    s.pop();

    sortedStack(s,x);

    s.push(y);
}

void sortStack(stack<int>&s){

    if(s.empty()){
        return;
    }

    int x=s.top();
    s.pop();

    sortStack(s);


    sortedStack(s,x);
    

}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        s.push(d);
    }

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

   
    return 0;
}