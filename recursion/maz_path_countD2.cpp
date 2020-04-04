#include<iostream>
using namespace std;

int maz_path_counD(int i,int j,int m,int n,string path){

    if(i==m&&j==n){
        cout<<path<<" ";
        return 1;
    }

    if(i>m||j>n){
        return 0;
    }

    int q1=maz_path_counD(i+1,j,m,n,path+'V');
    int q2=maz_path_counD(i,j+1,m,n,path+'H');

    int q3=0;

    if(i==j||i+j==n){
        q3=maz_path_counD(i+1,j+1,m,n,path+'D');
    }


    return q1+q2+q3;

}

int main(){

    int m;
    cin>>m;

    int ans=maz_path_counD(0,0,m-1,m-1,"");
    cout<<endl;
    cout<<ans<<endl;

    return 0;
}