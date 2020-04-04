#include<iostream>
using namespace std;

int main(){

    int a[10][10];
    int m,n;

    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;

    while(sr<=er&&sc<=ec){

        for(int i=sc;i<=er;i++){
            cout<<a[i][sc]<<", ";
            
        }
        sc++;

        for(int j=sc;j<=ec;j++){
            cout<<a[er][j]<<", ";
        }
        er--;

        for(int i=er;i>=sr;i--){
            cout<<a[i][ec]<<", ";
        }
        ec--;

        for(int j=ec;j>=sc;j--){
            cout<<a[sr][j]<<", ";
        }
        sr++;
    }

    cout<<"END"<<endl;


    return 0;
}