#include<iostream>
#include<cstring>
using namespace std;

void moveAllx(char *a,int n){

    if(n==0){
        return;
    }   

    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='x'&&a[i+1]!='\0'){
            swap(a[i],a[i+1]);
        }
    }
      
    moveAllx(a+1,n-1);
}

int main(){

    char a[10000];
    cin>>a;

    int n=strlen(a);
    // cout<<n<<endl;
    moveAllx(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;

    return 0;
}