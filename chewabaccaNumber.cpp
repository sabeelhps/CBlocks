#include<iostream>
using namespace std;

int main(){

    char a[100];
    cin.getline(a,100);
    int temp;
    
    if(a[0]!='9'){
        temp=(9-(a[0]-'0'))+'0';  
        if(temp<a[0]-'0'){
            a[0]=temp+'0';
        } 
    }

    int i=1;   
    while(a[i]!='\0'){

        temp=9-(a[i]-'0');
        if(temp<a[i]-'0'){
            a[i]=temp+'0';
        }
       

        i++;
    }

    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }
    cout<<endl;


    return 0;
}