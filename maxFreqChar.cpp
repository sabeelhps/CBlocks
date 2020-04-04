#include<iostream>
using namespace std;

int main(){

    char a[10000];
    cin.getline(a,10000);

    int freq[26]={0};

    int i=0;
    while(a[i]!='\0'){

        freq[a[i]-'a']++;

        i++;
    }

    int index=0;
    int max=0;
    for(int i=0;i<26;i++){
       
        
        if(max<freq[i]){
            max=freq[i];
            index=i;
        }
    }

    char k='a'+index;

    cout<<k<<endl;
    
   


    return 0;
}