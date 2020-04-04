#include<iostream>
using namespace std;



int main(){

    int a[]={-4,1,3,-2,6,2,-1,-4,-7};
    int n=sizeof(a)/sizeof(int);


    int cs[10000];

    cs[0]=a[0];
    int left;
    int right;

    int currentSum=0;
    int maxSum=0;

    for(int i=1;i<n;i++){
        cs[i]=cs[i-1]+a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSum=0;
            currentSum=cs[j]-cs[i-1];

            if(currentSum>maxSum){
                left=i;
                right=j;
                maxSum=currentSum;
            }
        }
    }

    cout<<"Max Sum : "<<maxSum<<endl;

    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ,";

    }
    cout<<endl; 

    


    return 0;
}