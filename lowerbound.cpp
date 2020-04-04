#include<iostream>
using namespace std;

int lower_bound(int *a,int n,int key){

    int s=0;
    int e=n-1;
    int lowerBound=-1;

    while(s<=e){

        int m=(s+e)/2;
        
        if(a[m]==key){
            lowerBound=m;
            e=m-1;
        }
        else if(a[m]<key){
            e=m-1;
        }
        else{
            s=m+1;
        }

    }

return lowerBound;

}


int main(){

    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    cout<<lower_bound(a,n,key)<<endl;


    return 0;
}