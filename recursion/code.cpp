#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
using namespace std;

#define int long long int

unordered_map<int,unordered_map<int,int> >dp;

int solve(int n,int last){

    if(n==0){
        
        return 1;
    }
    if(dp[n][last]){
        return dp[n][last];
    }

    if(last==-1){
        return dp[n][last]=solve(n-1,0)+solve(n-1,1);
    }
    else if(last == 0) return dp[n][last]=solve(n-1,0)+solve(n-1,1);
    else return dp[n][last]=solve(n-1,0);
}

int32_t main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<solve(n,-1)<<endl;

    }

    return 0;
}