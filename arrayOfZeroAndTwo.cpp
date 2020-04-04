#include<iostream>
using namespace std;

int main(){

    int freq[3]={0};

    int n;
    cin>>n;

    int a[10000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    for(int i=0;i<3;i++){

        while(freq[i]!=0){
            cout<<i<<" ";
            freq[i]--;
        }


    }
    cout<<endl;


    return 0;
}