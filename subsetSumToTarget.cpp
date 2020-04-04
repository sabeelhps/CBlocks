#include<iostream>
#include<vector>
using namespace std;

#define int long long int

vector<int>v;

bool solve(int index,int sum,int key){

    if(v.size()==index){
        if(sum==key){
            return true;
        }
        return false;
    }

    return solve(index+1,sum,key)||solve(index+1,sum+v[index],key);
}

int32_t main(){

    int n,key;
    cin>>n>>key;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    if(solve(0,0,key)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}