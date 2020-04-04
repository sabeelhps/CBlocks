#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;


string in;

void solve(int i,int cnt){

    if(cnt==in.size()){
        return;
    }

    if(in[i]=='x'){
        in=in.substr(0,i)+in.substr(i+1)+in[i];
        solve(i,cnt+1);
        
    }
    else{
        solve(i+1,cnt+1);
    }

}

int main(){

   
    cin >>in; 

    solve(0,0);
    
    cout<<in<<endl;

    return 0;
}