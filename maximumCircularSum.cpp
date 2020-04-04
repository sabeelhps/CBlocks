#include<iostream>
using namespace std;

int kadane(int *a,int n){

    int ms=0;
    int cs=0;

    for(int i=0;i<n;i++){
        cs+=a[i];

        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }

return ms;

}

int main(){

    int a[]={10, -3, -4, 7, 6, 5, -4, -1};
    int n=sizeof(a)/sizeof(int);
    int cad1;

    cad1=kadane(a,n);
    int csum=0;
    for(int i=0;i<n;i++){
        csum+=a[i];
        a[i]=-a[i];
    }

    int temp=kadane(a,n);

    int cad2=csum-(-temp);

    cout<<max(cad1,cad2)<<endl;


    



    return 0;
}