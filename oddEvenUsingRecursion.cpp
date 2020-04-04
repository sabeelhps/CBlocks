#include<iostream>
using namespace std;

void solve(int n){

    if(n==0){
        return;
    }

    if(n%2!=0){
        cout<<n<<endl;
       
    }
    solve(n-1);
    if(n%2==0){
        cout<<n<<endl;
       
    }

}

int main(){

    int n;
    cin>>n;

    solve(n);


    return 0;
}