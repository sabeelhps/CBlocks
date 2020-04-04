#include<iostream>
using namespace std;

int main(){

    char a[1000];
    cin>>a;

    if(a[0]!='9'){
        int temp=(9-(a[0]-'0'));
        if(a[0]-'0'>temp){
            a[0]=temp+'0';
        }
    }

    for(int i=1;a[i]!='\0';i++){
        int temp=9-(a[i]-'0');

        if(a[i]-'0'>temp){
            a[i]=temp+'0';
        }
    }

    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }
    cout<<endl;


    return 0;
}