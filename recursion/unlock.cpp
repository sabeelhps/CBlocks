#include<iostream>
using namespace std;

void solve(int *a,int n,int k){

    int i=0;
    int j=n-1;

    while(i<=j&&k){

        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i++;
            k--;
        }
        i++;
    }
}

int main(){

    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    solve(a,n,k);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}