#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

#define int long long int

vector<string>v;

void solve(string in,string out){

    if(in.size()==0){
        v.push_back(out);
        return;
    }

    char c1=in[0];
    solve(in.substr(1),out);
    solve(in.substr(1),out+c1);

}



int32_t main(){
    
    int t;
    cin>>t;

    while(t--){


    string in;
    cin>>in;
    v.clear();

    solve(in,"");

    sort(v.begin(),v.end());

    for(auto x: v){
        cout<<x<<endl;
    }

    }

    return 0; 
} 
 
