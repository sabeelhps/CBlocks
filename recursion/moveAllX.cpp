#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;


int main(){

    char a[10000];
    cin>>a;

    int j=0;
    int i=0;

    while(a[j]!='\0'){

        if(a[j]!='x'){
            swap(a[i],a[j]);
            i++;
        }
        j++;
    }

    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }
    cout<<endl;


  
    
    return 0;
}