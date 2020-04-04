#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;

unordered_map<int,int>dp;

int solve(int n){

    if(n==1){
        
        return 0;
    }

    int q1=INT_MAX;
    int q2=INT_MAX;
    int q3=INT_MAX;

    if(dp[n]!=0){
        return dp[n];
    }

    if(n%3==0){
        q1=1+solve(n/3);
     
    }
    if(n%2==0){
        q2=1+solve(n/2);
    }
    q3=1+solve(n-1);
   

    return dp[n]=min(q1,min(q2,q3));
}

int reduce_dp(int n){

    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;

    for(int currentNum=4;currentNum<=n;currentNum++){
        int q1=INT_MAX;
        int q2=INT_MAX;
        int q3=INT_MAX;

        if(currentNum%3==0)q1=1+dp[currentNum/3];
        if(currentNum%2==0)q2=1+dp[currentNum/2];
        q3=1+dp[currentNum-1];

        dp[currentNum]=min(q1,min(q2,q3));

    }

return dp[n];
}

int main(){

    int n;
    cin>>n;

    cout<<reduce_dp(n)<<endl;

    // cout<<solve(n)<<endl;

    return 0;
}