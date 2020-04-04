#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,int>dp;

int fib(int n){

    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }

    return dp[n]=fib(n-1)+fib(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<fib(n)<<endl;




    return 0;
}