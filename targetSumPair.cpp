#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }   

    int target;
    cin>>target;

    int l=0;
    int r=n-1;

    sort(a,a+n);

    while(l<r){

        if(a[l]+a[r]==target){
            cout<<a[l]<<" "<<a[r]<<endl;
            l++;
            r--;
        }

        else if(a[l]+a[r]>target){
            r--;
        }
        else{
            l++;
        }

    }


    return 0;
}