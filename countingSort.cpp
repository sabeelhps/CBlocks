#include<iostream>
using namespace std;

void countingSort(int *a,int *freq,int n){

    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

}

int main(){

    int freq[100005]={0};
    int a[100005];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    countingSort(a,freq,n);

    int i=0;
    while(i<100005){
        if(freq[i]!=0){
            while(freq[i]){
                cout<<i<<" ";
                freq[i]--;
            }
        }
        i++;
    }
    cout<<endl;




    return 0;
}