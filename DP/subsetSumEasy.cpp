#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int>v;
unordered_map<int,unordered_map<int,unordered_map<int,int> > > dp;
bool solve(int index,int sum,bool taken){

    if(index==v.size()){
        if(sum==0&&taken){
            return true;
        }
        return false;
    }
    if(dp[index][sum][taken])return (dp[index][sum][taken]==2);

    dp[index][sum][taken]= (solve(index+1,sum,taken)||solve(index+1,sum+v[index],1))+1;
    return dp[index][sum][taken]-1;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        v.clear();
        dp.clear();

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