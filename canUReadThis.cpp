#include<iostream>
using namespace std;

int main(){

    char a[10000];
    cin.getline(a,10000);

    int i=0;

    while(a[i]!='\0'){

        
        if(a[i]>='A'&&a[i]<='Z'&&a[i+1]>='A'&&a[i+1]<='Z'){

            cout<<a[i]<<endl;
            i++;
        }
        else if(a[i]>='a'&&a[i]<='z'&&a[i+1]>='A'&&a[i+1]<='Z'){
            cout<<a[i]<<endl;
            i++;
        }
        else{
            cout<<a[i];
            i++;
        }

   
    }
    cout<<endl;


    return 0;
}