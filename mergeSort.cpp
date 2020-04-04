#include<iostream>
using namespace std;

#define int long long int

void merge(int *a,int s,int e){

    int m=(s+e)/2;
    int i=s;
    int j=m+1;

    int c[e-s+1];

    int k=0;

    while(i<=m&&j<=e){

        if(a[i]<a[j]){
            c[k++]=a[i++];
        }else{
            c[k++]=a[j++];
        }

    }

    while(i<=m){
        c[k++]=a[i++];
    }

    while(j<=e){
        c[k++]=a[j++];
    }
    int l=0;
    for(int i=s;i<=e;i++){
        a[i]=c[l++];
    }

}

void mergeSort(int *a,int s,int e){

    if(s>=e){
        return;
    }

    int m=(s+e)/2;

    mergeSort(a,s,m);
    mergeSort(a,m+1,e);
    merge(a,s,e);
}

int32_t main(){

    int n;
    cin>>n;
    int a[100005];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}