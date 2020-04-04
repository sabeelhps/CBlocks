#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

vector<string>s;

void solve(string in,string out){

    if(in.size()==0){

        s.push_back(out);
        // cout<<out<<", ";
        return;
    }

    int num1=in[0]-'0';
    char c1=char(num1+'a'-1);
    solve(in.substr(1),out+c1);

    if(in.size()>1){
        int num2=in[1]-'0';
        int num3=(num1*10+num2);
        char c2=(num3)+'a'-1;

        if(num3<=26){
        solve(in.substr(2),out+c2);
        }
        
    }
}


int main(){

    string in;
    string out;

    cin>>in;

    cout<<"[";
    solve(in,out);

    int x=s.size()-1;

    for(int i=0;i<s.size();i++){
        cout<<s[i];
        if(x--){
            cout<<", ";
        }
    }


    cout<<"]";

    cout<<endl;
    
    return 0;
}