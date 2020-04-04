#include<iostream>
using namespace std;

int dp[10][10]={0};

int minCost(int grid[][10],int m,int n){

    dp[0][0]=grid[0][0];

    for(int i=1;i<n;i++){
        dp[0][i]=dp[0][i-1]+grid[0][i];
    }

    for(int i=1;i<m;i++){
        dp[i][0]=dp[i-1][0]+grid[i][0];
    }

    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
        }
    }
return dp[m-1][n-1];
}

int main(){

    int grid[10][10]={
                    {1,2,3},
                    {4,8,2},
                    {1,5,3}
                    };
    int m=3;
    int n=3;

    cout<<minCost(grid,m,n)<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}