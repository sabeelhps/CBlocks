#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<set>
using namespace std;

int n,m;

vector<int>v;
unordered_map<int,unordered_map<int,unordered_map<int,bool> > >dp;

bool solve(int index,int sum,bool taken){

    if(index==n){
        if(sum==m&&taken){
            return true;
        }
        return false;
    }
    if(dp[index][sum][taken]){
        return dp[index][sum][taken];
    }


return (dp[index][sum][taken]=solve(index+1,sum,taken))||(dp[index][sum][taken]=solve(index+1,sum+v[index],true));
}

int main(){

    cin>>n>>m;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    if(solve(0,0,false)){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }



    return 0;
}