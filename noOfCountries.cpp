#include<iostream>
using namespace std;

void solve(char map[10][10],int soln[][10],int i,int j,char temp,int m,int n){


    if(i>m||j>n){
        return;
    }
    if(i<0||j<0){
        return;
    }

    if(map[i][j]==temp){
        soln[i][j]=1;
    }

    solve(map,soln,i+1,j,temp,m,n);
    solve(map,soln,i,j+1,temp,m,n);
    solve(map,soln,i-1,j,temp,m,n);
    solve(map,soln,i,j-1,temp,m,n);
}

int main(){

    char map[10][10]={
                    "11212",
                    "11222",
                    "33122",
                    "45552",
                    "55551",
    };

    int soln[10][10]={0};
    int m=6,n=5;

    int ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){

            if(soln[i][j]!=1){
                solve(map,soln,i,j,map[i][j],m-1,n-1);
                ans++;
            }
        }
    }

    cout<<ans<<endl;


    return 0;
}