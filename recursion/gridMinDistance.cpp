#include<iostream>
using namespace std;

int minDist(int grid[][10],int m,int n){

    int dp[100][100]={0};

    dp[0][0]=grid[0][0];

    for(int c=1;c<n;c++){
        dp[0][c]=dp[0][c-1]+grid[0][c];
    }

    for(int r=1;r<m;r++){
        dp[r][0]=dp[r-1][0]+grid[r][0];
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

    int ans=minDist(grid,m,n);

    cout<<ans<<endl;

    return 0;
}