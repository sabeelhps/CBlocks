#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a ,string b){

    if(a.size()<=b.size()&&b.substr(0,a.size())==a){
        return false;
    }
    else if(b.size()<=a.size()&&a.substr(0,b.size())==b){
        return true;
    }
    else{
        return a<b;
    }



}

int main(){

    int n;
    cin>>n;

    vector<string>v;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        v.push_back(s);
    }

    sort(v.begin(),v.end(),compare);

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }


    return 0;
}