#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int>v;

map<int,vector<int> >vertical;

void print(int par,int level){

    if(par>=v.size()){
        return;
    }
    if(v[par]!=-1){
        vertical[level].push_back(v[par]);
    }
    print(2*par+1,level-1);
    print(2*par+2,level+1);
}



int main(){

    int k;
    cin>>k;

    int in;
    while(cin>>in){
        
        v.push_back(in);
    }

    print(0,0);

	for(auto x:vertical){
		for(auto y:x.second){
			cout<<y<<" ";
		}
		cout<<endl;
	}
    



    return 0;
}