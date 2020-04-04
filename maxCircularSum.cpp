#include<iostream>
using namespace std;

int kadane(int *a,int n){

    int cs=0;
    int ms=0;

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

    int a[100005];
    int n;



    int t;
    cin>>t;

    while(t--){
        cin>>n;
        int csum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            csum+=a[i];
        }

        int cad1=kadane(a,n);
        for(int i=0;i<n;i++){
            a[i]=-a[i];
        }

        int temp=kadane(a,n);

        int cad2=csum-(-temp);

        cout<<max(cad1,cad2)<<endl;

    }



    return 0;
}