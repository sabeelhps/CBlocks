#include<iostream>
using namespace std;


int solve(string in,string out){

    if(in.size()==0){
        cout<<out<<" ";
        return 1;
    }

    char c1=in[0];

    return solve(in.substr(1),out)+solve(in.substr(1),out+c1);

}

int main(){

    string in;
    cin>>in;

    int k=solve(in,"");
    cout<<endl;
    cout<<k<<endl;



    return 0;
}