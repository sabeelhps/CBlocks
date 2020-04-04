#include<iostream>
using namespace std;

void rotateString(char *a,int n){

    char k;

    int l=strlen(a);

   

    while(n--){

        k=a[l-1];
       
        int i=0;
        for(i=l;i>=0;i--){
            a[i+1]=a[i];
        }
        a[0]=k;
        a[l]='\0';
    }
}

void rotate(char *a,int n){

    int i=strlen(a);

    while(i>=0){
        a[i+n]=a[i];
        i--;
    }

    i=strlen(a);
    int j=i-n;
    int s=0;

    while(j<i){
        a[s]=a[j];
        s++;
        j++;
    }
    a[i-n]='\0';

}

int main(){

    int n;
    cin>>n;

    char a[1000];
    cin>>a;

    // rotateString(a,n);
    rotate(a,n);

    cout<<a<<endl;


    return 0;
}