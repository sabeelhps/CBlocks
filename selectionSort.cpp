#include<iostream>
#include<climits>
using namespace std;

void selectionSort(int *a,int n){

    int min;

    for(int i=0;i<n;i++){
        min=i;

        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }


return;
}

int main(){

    int n;
    cin>>n;
    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    selectionSort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    return 0;
}