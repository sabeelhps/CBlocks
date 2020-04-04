#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

vector<string>v;

bool compare(string a,string b){

    if(a.size()>=b.size()&&a.substr(0,b.size())==b){
        return true;
    }
    else if(b.size()>=a.size()&&b.substr(0,a.size())==a){
        return false;
    }
    else{
        return a<b;
    }

}

int main(){ 

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),compare);

    for(auto x:v){
        cout<<x<<endl;
    }




    return 0;
}