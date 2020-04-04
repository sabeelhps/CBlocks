#include<iostream>
using namespace std;

int linearSearch(int *a,int key,int n){

    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;


}

int main(){

    int a[]={1,2,3,4,5,6,67,78,8};
    int n=sizeof(a)/sizeof(int);

    cout<<linearSearch(a,4,n)<<endl;

    



    return 0;
}