#include<iostream>
using namespace std;

int main(){

    char a[1000];
    cin>>a;

    for(int i=0;i<strlen(a);i++){
        for(int j=i;j<strlen(a);j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }


    return 0;
}