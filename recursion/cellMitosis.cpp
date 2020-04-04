#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;

int n,a,b,c;

unordered_map<int,int>dp;

int solve(int i){

    if(i==n){
        return 0;
    }

    if(dp[i]){
        return dp[i];
    }

    int q1=INT_MAX;
    int q2=INT_MAX;
    int q3=INT_MAX;

    if(2*i<=n)
    q1=solve(2*i)+a;
    if(i+1<=n)
    q2=solve(i+1)+b;
    if(2*(i-1)>i&&2*(i-1)<=n)
    q3=solve(2*(i-1))+c+a;

return dp[i]=min(q1,min(q2,q3));

}

int main(){

   
    cin>>n;
    cin>>a>>b>>c;

    cout<<solve(1)<<endl;

    return 0;
}