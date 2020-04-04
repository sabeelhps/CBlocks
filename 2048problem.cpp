#include<iostream>
using namespace std;

string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void solve(int n){

    if(n/10==0){
        cout<<a[n];
        return;
    }

    int r=n%10;

   
    solve(n/10);
    cout<<a[r];
}

int main(){

    int n;
    cin>>n;

    solve(n);
    cout<<endl;




    return 0;
}