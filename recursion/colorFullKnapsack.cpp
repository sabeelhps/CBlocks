#include<iostream>
#include<vector>
using namespace std;

int n,m,x;

vector<int>wt;
vector<int>color;

int solve(int index,int x,int k){

    if(index==n){
        return 0;
    }

    int q1=0;
    if(wt[index]<=x&&k<=m){
        q1=x-solve(index+1,k+1);
    }



}

int main(){

    cin>>n>>m>>x;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        wt.push_back(d);
    }

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        color.push_back(d);
    }

    cout<<solve(0,x,1)<<endl;




    return 0;
}