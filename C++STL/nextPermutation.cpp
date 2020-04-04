#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int j;
        for(j=n-1;j>=1;j--){
            if(a[j-1]<a[j]){
                swap(a[j],a[j-1]);
                break;
            }
        }
        if(j==0){
            sort(a,a+n);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;






    }



    return 0;
}