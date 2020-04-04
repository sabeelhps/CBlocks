#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;

vector<int>v;
vector<string>vec;
set<string>s;


void solve(int index,int sum,int key,string out){

    if(index==v.size()){

        if(sum==key){
          
                cout<<out<<endl;
                
               
        }

        return;
    }

    string d=to_string(v[index]);
    solve(index+1,sum,key,out);
    solve(index+1,sum+v[index],key,d+" "+out);
   

}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    int key;
    cin>>key;

    solve(0,0,key,"");


    return 0;
}