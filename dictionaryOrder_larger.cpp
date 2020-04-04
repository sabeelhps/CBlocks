#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> k;
string str;


void solve(string in,string out){

    if(in.size()==0){
        if(str.compare(out)<0){
            k.push_back(out);
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
    // sort(str.begin(),str.end());
    // cout << str<<endl;
    solve(str,"");
    sort(k.begin(),k.end());

    for(auto x:k){
        cout << x<<"\n";
    }
    // cout <<endl;
    

    return 0;
}