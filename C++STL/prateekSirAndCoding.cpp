#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

stack<int>s;

int main(){ 

    int q;
    cin>>q;

    while(q--){
        int n,cost;
        cin>>n;

        if(n==2){
            cin>>cost;
            s.push(cost);
        }
        if(n==1){
            if(s.empty()){
                cout<<"No Code"<<endl;
            }else{
            cout<<s.top()<<endl;
            s.pop();
            }
        }

    }
    return 0;
}