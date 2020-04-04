#include<iostream>
#include<unordered_map>
using namespace std;

#define int long long int

unordered_map<int,int>dp;

int nCoins(int n){
    if(dp[n]!=0){
        return dp[n];
    }
    if(n==0||n==1){
        return n;
    }

return dp[n]=max(n,nCoins(n/2)+nCoins(n/3)+nCoins(n/4));

}

int32_t main(){

    int n;
    cin>>n;

    cout<<nCoins(n)<<endl;


    return 0;
}