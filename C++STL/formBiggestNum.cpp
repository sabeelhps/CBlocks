#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

vector<string>v;

bool compare(string a,string b){

    return a+b>=b+a;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        v.clear();

        for(int i=0;i<n;i++){
            string d;
            cin>>d;
            v.push_back(d);
        }

        sort(v.begin(),v.end(),compare);

        for(auto x:v){
            cout<<x;
        }
        cout<<endl;
    }

    


  
    return 0;
}