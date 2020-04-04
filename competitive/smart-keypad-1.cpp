#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

char  table[][10]= { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void solve(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    int digit=in[i]-'0';
    for(int k=0;table[digit][k]!='\0';k++){
        out[j]=table[digit][k];
        solve(in,out,i+1,j+1);
    }
}


int main(){

    char a[100];
    char b[100];
    cin>>a;

    solve(a,b,0,0);





    return 0;
}