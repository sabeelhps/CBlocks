#include<iostream>
using namespace std;

void filter(char *a,int n){

    int j=0;
    while(n>0){
        int last_bit=n&1;
        if(last_bit==1){
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;


}

void printSubsequences(char *a){
    int l=strlen(a);
    for(int i=0;i<(1<<l);i++){
        filter(a,i);
    }
return;
}

int main(){

    char a[100];
    cin>>a;

    printSubsequences(a);



    return 0;
}