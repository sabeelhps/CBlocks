#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int n;

vector<int>sz;
vector<int>value;
unordered_map<int,unordered_map<int,int> >dp;

int solve(int index,int k){

    if(index==n){
        return 0;
    }

    if(dp[index][k]){
        return dp[index][k];
    }

    int q1=0;

    if(sz[index]<=k){
        q1=solve(index,k-sz[index])+value[index];
    }
    int q2=solve(index+1,k);

return dp[index][k]=max(q1,q2); 
}


int main(){

    int k;

    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        sz.push_back(d);
    }

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        value.push_back(d);
    }

    cout<<solve(0,k)<<endl;


    return 0;
}