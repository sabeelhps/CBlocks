#include<iostream>
using namespace std;

int upper_bound(int *a,int n,int key){

    int s=0;
    int e=n-1;
    int upperBound=-1;
    while(s<=e){

        int m=(s+e)/2;

        if(a[m]==key){
            upperBound=m;
            s=m+1;
        }
        else if(a[m]<key){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
return upperBound;
}

int main(){

    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;


    cout<<upper_bound(a,n,key)<<endl;
    return 0;
}