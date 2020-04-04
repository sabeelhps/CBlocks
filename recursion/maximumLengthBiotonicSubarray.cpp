#include<iostream>
using namespace std;

int biotonicSubarray(int *a,int n){

    bool dec=false;

    for(int i=0;i<n;i++){

        if(!dec&&a[i+1]<a[i]){
            dec=true;
        }
        else if(dec){
            if(a[i+1]>a[i]){
                dec=false;
            }
        }


        
    }





}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int a[1000];

        for(int i=0;i<n,i++){
            cin>>a[i];
        }

        int ans=biotonicSubarray(a,n);

    }

    return 0;
}