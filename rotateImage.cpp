#include<iostream>
using namespace std;

int main(){

    int a[10][10];

    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][n-1-i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}