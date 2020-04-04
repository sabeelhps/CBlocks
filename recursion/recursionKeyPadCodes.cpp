#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

char keypad[][10]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

int solve(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return 1;
    }

    int digit=in[i]-'0';
    int n=0;
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        n+=solve(in,out,i+1,j+1);    
    }
    return n;
}

int main(){

    char in[100];
    char out[100];

    cin>>in;

    int ans=solve(in,out,0,0);
    cout<<endl;
    cout<<ans<<endl;

 
    return 0;
}