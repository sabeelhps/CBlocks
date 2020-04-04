#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;


void solve(string in,string out){

    if(in.size()==0){
        cout<<out<<endl;
        return;
    }

    int num1=in[0]-'0';
    char c1=num1+'A'-1;
    solve(in.substr(1),out+c1);

    if(in.size()>1){
        int num2=in[1]-'0';
        int num3=num1*10+num2;
        char c2=num3+'A'-1;
        if(num3<=26)
        solve(in.substr(2),out+c2);
    }



}

int main(){

    string in;
    cin>>in;

    solve(in,"");




    return 0;
}