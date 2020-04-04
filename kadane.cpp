#include<iostream>
using namespace std;

int main(){

    int a[]={-4,1,3,-2,6,2,-1,-4,-7};
    int n=sizeof(a)/sizeof(int);

    int cs=0;
    int ms=0;

    for(int i=0;i<n;i++){
        cs+=a[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<ms<<endl;

    return 0;
}