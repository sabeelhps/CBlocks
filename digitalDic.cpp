#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<string>db;

vector<string> solve(string s){

    vector<string>temp;
    int flag=0;
    for(auto x:db){
        if(x.substr(0,s.size())==s){
            flag=1;
            temp.push_back(x);
        }
    }

    if(flag==0){
        db.push_back(s);
    }

    sort(temp.begin(),temp.end());

return temp;
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string d;
        cin>>d;
        db.push_back(d);
    }

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        vector<string>data;

        data.clear();

        data=solve(s);

        if(!data.empty()){

            for(auto x:data){
                cout<<x<<endl;
            }
        
        }else{
            cout<<"No Suggestions"<<endl;
        }

    }

    return 0;
}