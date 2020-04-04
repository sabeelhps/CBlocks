#include<iostream>
#include<vector>
using namespace std;

int ratInMaze(char maz[10][10],int soln[][10],int i,int j,int m,int n){

    if(i==m&&j==n){
        soln[m][n]=1;

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<soln[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;


    return 1;
    }

    if(i>m||j>n){
        return 0;
    }
    if(maz[i][j]=='X'){
        return 0;


    }

    soln[i][j]=1;
    // int downSucess=ratInMaze(maz,soln,i+1,j,m,n);
    // int rightSuccess=ratInMaze(maz,soln,i,j+1,m,n);

    int ans=ratInMaze(maz,soln,i+1,j,m,n)+ratInMaze(maz,soln,i,j+1,m,n);

    soln[i][j]=0;
    // if(downSucess||rightSuccess){
    //     return true;
    // }

return ans;
}


int main(){

    char maz[10][10]={
        {"0000X"},
        {"000X0"},
        {"0X000"},
        {"00000"}
    };

    int m=4;
    int n=5;

    int soln[10][10]={0};

    cout<<ratInMaze(maz,soln,0,0,m-1,n-1)<<endl;;


    return 0;
}