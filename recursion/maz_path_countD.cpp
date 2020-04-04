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

    return maz_path_counD(i+1,j,m,n,path+'V')+maz_path_counD(i,j+1,m,n,path+'H')+maz_path_counD(i+1,j+1,m,n,path+'D');

}

int main(){

    int m,n;
    cin>>m>>n;

    int ans=maz_path_counD(0,0,m-1,n-1,"");
    cout<<endl;
    cout<<ans<<endl;

    return 0;
}