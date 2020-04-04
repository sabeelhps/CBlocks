#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool canPlace(int soln[][11],int i,int j,int n){

    for(int row=i;row>=0;row--){
        if(soln[row][j]==1){
            return false;
        }

    }

    int x=i;
    int y=j;

    while(x>=0&&y>=0){
        if(soln[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0&&y<n){

        if(soln[x][y]==1){
            return false;
        }
        x--;
        y++;

    }

return true;
}

int solveNqueen(int soln[][11],int i,int n){

    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(soln[i][j]==1){
                    cout<<"{"<<i+1<<"-"<<j+1<<"} ";
                }
            }
            cout<<" ";
        }

    return 1;
    }
    int ans=0;
    for(int j=0;j<n;j++){

        if(canPlace(soln,i,j,n)){
            soln[i][j]=1;

            ans+=solveNqueen(soln,i+1,n);
            soln[i][j]=0;

        }
    }
    return ans;

}

int main(){

    int n;
    cin>>n;

    int soln[11][11]={0};

    int s=solveNqueen(soln,0,n);
    cout<<endl;
    cout << s<<endl;
   
    return 0;
}