#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
using namespace std;

vector<int>v;


bool solve(int index,int sum,bool taken){

    if(index==v.size()){

        if(sum==0&&taken){
            return true;
        }
        return false;
    }

    return solve(index+1,sum+v[index],1)||solve(index+1,sum,taken);
    
}


int main(){

    int t;
    cin>>t; 

    while(t--){

        v.clear();

        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            v.push_back(d);
        }
        
        if(solve(0,0,0)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    
	return 0;
}