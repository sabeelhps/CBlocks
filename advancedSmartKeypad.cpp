#include<iostream>
#include<cstring>
using namespace std;

char keypad[10][10]={" ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz"};

string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

void solve(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';

        for(int l=0;l<11;l++){
            string x=searchIn[l];
            for(int k=0;k<x.size();k++){
                if(out[0]==x[k]){
                    int m=0;
                    while(out[m]==x[k+m]){
                        m++;
                    }
                    if(m==j){
                        cout << x << endl;
                        return;
                    }

                }
            }
        }
        
        return;
    }

    int digit=in[i]-'0';
   
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        solve(in,out,i+1,j+1);
    }
}

int main(){

    char in[100];
    char out[100];

    cin>>in;

    solve(in,out,0,0);



    return 0;
}