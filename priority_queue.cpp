#include<iostream>
#include<queue>
using namespace std;

int main(){

    // priority_queue<int>pq;

    priority_queue<int,vector<int>,greater<int> >pq;

    int a[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++){
        pq.push(a[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ,";
        pq.pop();
    }




    return 0;
}