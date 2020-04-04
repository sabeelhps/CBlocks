#include<iostream>
using namespace std;

static int ans=0;

bool isSafe(int board[][12],int i,int j,int n){

    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }

    int x=i;
    int y=j;

    while(x>=0&&y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }

    x=i;
    y=j;

    while(x>=0&&y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

return true;
}



bool solveNqueen(int board[][12],int i,int n){

    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q"<<" ";
                }else{
                    cout<<"_"<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;

        ans++;

        return false;
    }

    for(int j=0;j<n;j++){
        
        if(isSafe(board,i,j,n)){
            board[i][j]=1;

            bool kyaAgeRakhPaye=solveNqueen(board,i+1,n);

            if(kyaAgeRakhPaye){
                return true;
            }

            board[i][j]=0;

        }
    }

return false;
}

int main(){

    int n;
    cin>>n;

    int board[12][12]={0};

    solveNqueen(board,0,n);

    cout<<ans<<endl;

    return 0;
}