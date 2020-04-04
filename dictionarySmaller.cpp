#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

string str;
vector<string>v;

void solve(string in,string out){

    if(in.size()==0){
        if(str.compare(out)>0){
            v.push_back(out);
        }
        return;
    }

    for(int i=0;i<in.size();i++){
        char c1=in[i];

        solve(in.substr(0,i)+in.substr(i+1),out+c1);
    }

}

int main(){

    cin>>str;

    solve(str,"");

    sort(v.begin(),v.end());

    for(auto x:v){
        cout<<x<<endl;
    }

    



    return 0;
}