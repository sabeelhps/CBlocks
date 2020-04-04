#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *a){

    int i=0;
    int l=strlen(a);
    int j=l-1;

    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    return;
}


int main(){

    char a[1000];

    cin.getline(a,1000);

    reverse(a);

    cout<<a<<endl;

    return 0;
}