#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

string merge(string a,string b){

    int i=0;
    int j=0;
    string str="";
    while(i<a.size()&&j<b.size()){

        if(a[i]<b[j]){
            str+=a[i++];
        }else{
            str+=b[j++];
        }
    }

    while(i<a.size()){
        str+=a[i++];
    }

    while(j<b.size()){
        str+=b[j++];
    }


return str;
}


int main(){

    int t;
    cin>>t;

    while(t--){
    string a,b;
    cin>>a>>b;

    cout<<merge(a,b)<<endl;

    
      
    }


    return 0;
}