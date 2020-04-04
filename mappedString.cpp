#include<iostream>
using namespace std;

void mapString(string in,string out){

    if(in.size()==0){
        cout<<out<<endl;
        return;
    }

    int num1=in[0]-'0';
    char c1=char(num1+'A'-1);

    mapString(in.substr(1),out+c1);

    if(in.size()>1){
        int num2=in[1]-'0';
        int num3=num1*10+num2;

        char c2=char(num3+'A'-1);
        if(num3<=26){
            mapString(in.substr(2),out+c2);
        }

    }

}


int main(){

    string in;
    string out=""; 

    cin>>in;

    mapString(in,out);


    return 0;
}