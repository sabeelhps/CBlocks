#include<iostream>
using namespace std;

void solve(string in){

    if(in.size()==0){
        return;
    }

    if(in[0]!=in[1]){
        cout<<in[0];
    }

    solve(in.substr(1));
}

int main(){ 

    string in;

    cin>>in;

    solve(in);
    cout<<endl;




    return 0;
}