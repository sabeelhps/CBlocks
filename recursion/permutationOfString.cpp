#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;

vector<string>v;

int solve(string in,string out){

    if(in.size()==0){
       v.push_back(out);
        return 1;
    }

    int ans=0;
    for(int i=0;i<in.size();i++){
        char c1=in[i];
        ans+=solve(in.substr(0,i)+in.substr(i+1),out+c1);
    }
return ans;
}



int main(){

    string in;
    cin>>in;

    cout<<solve(in,"")<<endl;
    
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;





    return 0;
}