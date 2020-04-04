#include<iostream>
#include<climits>
using namespace std;

int subArray(int *a,int n){

    int csum=0;
    int msum=INT_MIN;
    int left;
    int right;
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            csum=0;
           for(int k=i;k<=j;k++){
               csum+=a[k];
               if(csum>msum){
                   left=i;
                   right=j;
                   msum=csum;
               }
           }
           
        }
    }

    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ,";
    }
    cout<<endl;


return msum;
}

int main(){

    int a[]={1,2,3,4};
    // cout<<sizeof(int)<<endl;
    int n=sizeof(a)/sizeof(int);

    cout<<subArray(a,n)<<endl;



    return 0;
}