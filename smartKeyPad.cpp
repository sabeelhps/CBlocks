#include<iostream>
#include<cstring>
using namespace std;

char keypad[][10]= {" ",".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printKeyPad(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;  
    }

    int digit=in[i]-'0';

//    if(digit==0){
//        printKeyPad(in,out,i+1,j);
//    }

    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];

        printKeyPad(in,out,i+1,j+1);
    }
}

int main(){

    char in[100];
    char out[100];

    cin>>in;

    printKeyPad(in,out,0,0);
    
    return 0;
}
