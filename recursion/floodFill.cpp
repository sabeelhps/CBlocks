#include<iostream>
#include<vector>
using namespace std;


void floodFill(int a[][10],int soln[][10],int i,int j,int m,int n){

    if(i<0||j<0||i>m||j>n){
        return;
    }

    if(soln[i][j]==1){
        return;
    }

    soln[i][j]=1;

    if(a[i][j]==a[i-1][j]){
       floodFill(a,soln,i-1,j,m,n);
    }

    if(a[i][j]==a[i][j-1]){
        floodFill(a,soln,i,j-1,m,n);
    }
    if(a[i][j]==a[i+1][j]){
        floodFill(a,soln,i+1,j,m,n);
    }
    if(a[i][j]==a[i][j+1]){
         floodFill(a,soln,i,j+1,m,n);
    }    
}

int main(){

    int a[][10]={
                {1,2,2,3,4},
                {1,1,2,2,3},
                {1,2,2,3,3}

    };

    int soln[10][10]={0};

    int ans=0;
    int m=3;
    int n=5;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(soln[i][j]==0){
                ans++;
                floodFill(a,soln,i,j,m-1,n-1);
            }
        }
    }

    cout<<ans<<endl;
    
    



    return 0;
}
