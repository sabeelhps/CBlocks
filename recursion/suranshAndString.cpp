#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;

string str="";
string merge(string a,string b){

    int i=0;
    int j=0;
  
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

    string a;
    string b;

    int t;
    cin>>t;

    while(t--){

        cin>>a>>b;
        str.clear();
        cout<<merge(a,b)<<endl;

    }

    return 0;
}