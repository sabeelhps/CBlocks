#include<iostream>
#include<unordered_map>
using namespace std;

#define int long long int

unordered_map<int,int>dp;


int fib(int n){

    if(n==0||n==1){
        return n;
    }

    if(dp[n]!=0){

        return dp[n];
    }
    int ans=fib(n-1)+fib(n-2);

    dp[n]=ans;

return ans;
}

int32_t main(){

    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    



    return 0;
}