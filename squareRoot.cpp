#include<iostream>
using namespace std;

float square_root(int n,int p){

    int s=1;
    int e=n;
    float root;
    while(s<=e){
        int m=(s+e)/2;

        if(m*m==n){
            return m;
        }
        else if(m*m<n){
            root=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }

    float inc=0.1;
   
    for(int i=0;i<p-1;i++){

        while(root*root<n){

            root+=inc;

        }
        inc/=10;
    }
    root-=inc;

return root;
}

int main(){

    int n;
    cin>>n;
    int p;
    cin>>p;

    cout<<square_root(n,p)<<endl;


    return 0;
}