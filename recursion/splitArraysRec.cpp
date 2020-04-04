#include<iostream>
#include<vector>
using namespace std;

vector<int>v;

void solve(int index,int sums,int sume,string anss,string anse,int n){

    if(index==n){

        if(sums==sume){
            cout<<anss<<"and "<<anse<<endl;
        }


        return;
    }

    solve(index+1,sums+v[index],sume,anss+to_string(v[index])+" ",anse,n);
    
    solve(index+1,sums,sume+v[index],anss,anse+to_string(v[index])+" ",n);
}


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    solve(0,0,0,"","",n);



    return 0;
}