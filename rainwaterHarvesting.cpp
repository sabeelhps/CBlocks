#include<iostream>

using namespace std;

int maxLeft(int *a,int i){

    int max=0;

    for(int j=i;j>=0;j--){
        if(max<a[j]){
            max=a[j];
        }
    }

return max;

}

int maxRight(int *a,int i,int n){

    int max=0;

    for(int j=i;j<n;j++){
        if(max<a[j]){
            max=a[j];
        }
    }

return max;
}

int main(){

    int a[]={0,2,1,3,0,1,2,1,2,1};
    int n=sizeof(a)/sizeof(int);

   
    int water=0;

    for(int i=0;i<n;i++){
        water+=min(maxLeft(a,i),maxRight(a,i,n))-a[i];
    }
    cout<<water<<endl;
    return 0;
}