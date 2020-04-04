#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
    int flag=0;
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                flag=1;
                count++;
                swap(a[j],a[j+1]);
            }
        }
        if(flag==0){
            break;
        }
    }

    cout<<count<<endl;

return ;
}

int main(){

    int n;
    cin>>n;
    int a[100005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    bubbleSort(a,n);

    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}