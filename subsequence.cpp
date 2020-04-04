#include<iostream>
using namespace std;

static int n=0;


void solve(string in,string out){

    if(in.size()==0){
        cout<<out<<endl;
        n++;
        return;
    }

    char c1=in[0];

   
    solve(in.substr(1),out);
    solve(in.substr(1),out+c1);
    

}



int main(){

   string in;
   string out;

   cin>>in;

   solve(in,"");
   
   cout<<endl;

   cout<<n<<endl;

    return 0;
}