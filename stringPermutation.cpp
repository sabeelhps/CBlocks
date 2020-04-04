#include<iostream>
using namespace std;

void solve(string in,string out){

    if(in.size()==0){
        cout<<out<<" ";
        return;
    }

    for(int i=0;i<in.size();i++){

        char c1=in[i];

        solve(in.substr(0,i)+in.substr(i+1),out+c1);

    }
}

int main(){

    string in;
   

    cin>>in;

    solve(in,"");
    cout<<endl;




    return 0;
}