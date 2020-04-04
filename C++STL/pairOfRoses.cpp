#include<iostream>
#include<climits>
using namespace std;

void solve(int *a,int n,int money){

    int l=0;
    int r=n-1;
    int min=INT_MAX;
    int i,j;
    while(l<r){
       
        if(a[l]+a[r]==money){
            if(r-l<min){
                i=l;
                j=r;
                min=r-l;
            }
            l++;
            r--;
        }
        else if(a[l]+a[r]>money){
            r--;
        }
        else{
            l++;
        }

    }
    cout<<"Deepak should buy roses whose prices are "<<a[i]<<" and "<< a[j]<<"."<<endl;
}

int main(){

    int t;
    cin>>t;
    int flag=0;
    

    while(t--){

        int n;
        if(flag==1){
            cout<<endl;
        }
        cin>>n;
        int a[n];
        flag=1;


        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int money;
        cin>>money;

        sort(a,a+n);

        solve(a,n,money);
       

    }


    return 0;
}