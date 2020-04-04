#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a[1000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;

        while(l<r){

            if(a[i]+a[l]+a[r]==target){
                cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
                l++;
                r--;
            }

            else if(a[i]+a[l]+a[r]>target){
                r--;
            }
            else if(a[i]+a[l]+a[r]<target){
                l++;
            }
        }
    }



    return 0;
}