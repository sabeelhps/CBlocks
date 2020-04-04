#include<iostream>
using namespace std;



bool ratInMaze(char maz[1000][1000],int soln[][1000],int i,int j,int m,int n){

    if(i==m&&j==n){

        soln[m][n]=1;

        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<soln[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;


        return true;
    }

    if(i>m || j>n){
        return false;
    }

    if(maz[i][j]=='X'){
        return false;
    }

    soln[i][j]=1;

    bool rightSucces=ratInMaze(maz,soln,i,j+1,m,n);
    bool downSuccess=ratInMaze(maz,soln,i+1,j,m,n);

    soln[i][j]=0;

    if(rightSucces||downSuccess){
        return true;
    }

    return false;
}

int main(){

    // char maz[10][10]={
    //                     "0000",
    //                     "00X0",
    //                     "000X",
    //                     "0X00",
    // };


    int m,n;
    cin>>m>>n;
    char maz[1000][1000];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>maz[i][j];
        }
    }

    int soln[1000][1000]={0};

    ratInMaze(maz,soln,0,0,m-1,n-1);



    return 0;
}