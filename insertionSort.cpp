#include<iostream>
using namespace std;

void insertion_sort(int *a,int n){

    for(int i=1;i<=n-1;i++){
        int j=i-1;
        int e=a[i];

        while(j>=0&&a[j]>e){

            a[j+1]=a[j];
            j--;


        }
        a[j+1]=e;

    }
    
}

int main(){

    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    insertion_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}