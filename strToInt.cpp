#include<iostream>
using namespace std;

int strToInt(char *a,int l){

    if(l==1){
        return a[0]-'0';
    }

return 10*strToInt(a,l-1)+(a[l-1]-'0');
}



int main(){

    char a[10000];
    cin>>a;

    int l=strlen(a);

    cout<<strToInt(a,l)<<endl;


    return 0;
}