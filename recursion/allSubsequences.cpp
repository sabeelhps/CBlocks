#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<string>v;

void solve(string in,string out){

    if(in.size()==0){
        v.push_back(out);
        return;
    }

    char c1=in[0];

    solve(in.substr(1),out+c1);
    solve(in.substr(1),out);
}

int main(){

    int t;
    cin>>t;

    while(t--){
        string in;
        cin>>in;
        v.clear();
        solve(in,"");
        sort(v.begin(),v.end());
        for(auto x:v){
            cout<<x<<endl;
        }


    }
    return 0;
}