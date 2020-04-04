#include<iostream>
#include<cstring>
using namespace std;

int solve(string in,string out){

    if(in.size()==0){
        cout<<out<<" ";
        return 1;
    }

    int k=in[0];
    char c1=in[0];
    string c2=to_string(k);

    return solve(in.substr(1),out)+solve(in.substr(1),out+c1)+solve(in.substr(1),out+c2);
}


int main() {

    string in;
    cin>>in;

    int ans=solve(in,"");
    cout<<endl;
    cout<<ans<<endl;




	return 0;
}