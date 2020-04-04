#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int n;

vector<int>v;

unordered_map<int,unordered_map<int,int> >dp;

int solve(int index,int k){

    if(index==n){
        if(k==0){
            return 1;
        }
        return 0;
    }
    if(dp[index][k]){
        return dp[index][k];
    }

    int q1=0;
    if(v[index]<=k){
        q1=solve(index,k-v[index]);
    }
    int q2=solve(index+1,k);


return dp[index][k]=q1+q2;
}

int main(){

    int k;
    cin>>k;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    cout<<solve(0,k)<<endl;

    return 0;
}