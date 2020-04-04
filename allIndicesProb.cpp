#include<iostream>
using namespace std;

#define mod 10e7

void solve(int *a,int i,int n,int key){

    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }

    solve(a,i+1,n,key);
}

int main(){

    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    solve(a,0,n,key);

    cout<<endl;


    return 0;
}