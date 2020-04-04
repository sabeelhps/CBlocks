#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void solve(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
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