#include<iostream>
using namespace std;

string str="";

int maz_path(int soln[][100],int i,int j,int m,int n,string path){

    if(i==m&&j==n){
       
        cout << path<<" ";

    return 1;
    }

    if(i>m||j>n){
        return 0;
    }    
    return maz_path(soln,i+1,j,m,n,path+'V')+maz_path(soln,i,j+1,m,n,path+'H');

}

int main(){

    int m,n;
    cin>>m>>n;

    int soln[100][100]={0};

    int ans=maz_path(soln,0,0,m-1,n-1,"");
    cout<<endl;
    cout<<ans<<endl;
    


    return 0;
}