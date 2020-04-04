#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
#define int long long int
unordered_map<int,unordered_map<int ,int> > dp;
int n;
vector<int>v;

vector<int>wt;

int solve(int index,int k){

    if(index==n){
        return 0;
    }
    if(dp[index][k])return dp[index][k];

    int q1=0;
    if(v[index]<=k){
        q1=solve(index,k-v[index])+wt[index];
    }
    int q2=solve(index+1,k);

    return dp[index][k]=max(q1,q2);
}


int32_t main(){

    dp.clear();
    
    int k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        wt.push_back(d);
    }

    cout<<solve(0,k)<<endl;




    return 0;
}