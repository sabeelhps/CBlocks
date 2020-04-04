#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
using namespace std;

#define int long long int

string a;

unordered_map<char,bool>mp;

int num[]={2,3,5,7,11,13,17,19,23,29};

vector<string> generateSubstring(){
    vector<string>v;
    for(int i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
            string str="";
            for(int k=i;k<=j;k++){
                str+=a[k];
            }
            v.push_back(str);
        }
    }

return v;
}

bool isCBnumber(string in){
    int temp=stoi(in);

    if(temp==0){
        return false;
    }
    if(temp==1){
        return false;
    }

    for(int i=0;i<10;i++){
        if(temp==num[i]){
            return true;
        }
    }


    for(int i=0;i<10;i++){
        if(temp%num[i]==0){
            return false;
        }
    }

return true;
}

bool notPresent(string x){
    for(int i=0;i<x.size();i++){
        if(mp[x[i]]){
            return false;
        }
    }
    return true;
}

void mapString(string x){
    for(int i=0;i<x.size();i++){
        mp[x[i]]=true;
    }
}

bool compare(string a,string b){

    
return a.length()<b.length();
}

int32_t main(){

    int n;
    cin>>n;
    cin>>a;
    vector<string>cbnum;
    vector<string>v=generateSubstring();
    int ans=0;

    sort(v.begin(),v.end(),compare);

    // for(auto x:v){
    //     cout<<x<<endl;
    // }


    for(int i=0;i<v.size();i++){
        string x=v[i];
        if(isCBnumber(x)){           
            if(notPresent(x)){
                cbnum.push_back(x);
                mapString(x);
            }
        }
    }
    // for(auto x:cbnum){
    //     cout<<x<<endl;
    // }
   
    cout<<cbnum.size()<<endl;



    return 0;
}