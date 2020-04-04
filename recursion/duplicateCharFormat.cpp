#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;

string str;

void solve(int index,string in){

    if(index==str.size()){
        return;
    }

    if(in[0]==in[1]){
        cout<<in[0];
        solve(index+2,in.substr(2));
        
    }else{
        cout<<in[0];
        solve(index+1,in.substr(1));
    }
    
}

int main(){

    // string in;
    cin>>str;

    solve(0,str);
    cout<<endl;



    return 0;
}