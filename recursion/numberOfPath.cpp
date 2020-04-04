#include<iostream>
using namespace std;

int noOfPath(int i,int j,int m,int n){

    if(i==m&&j==n){
        return 1;
    }

    if(i>m||j>n){
        return 0;
    }


    return noOfPath(i,j+1,m,n)+noOfPath(i+1,j,m,n);
}

int main(){

    int t;
    cin>>t;

    while(t--){

      
        int m,n;

        cin>>m>>n;


        cout<<noOfPath(0,0,m-1,n-1)<<endl;
    }



    return 0;
}