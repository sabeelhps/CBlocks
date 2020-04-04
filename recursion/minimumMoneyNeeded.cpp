#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int n,w;
vector<int>price;

int solve(int index,int k){

    if(index==n){
        return 0;
    }

    int q1=INT_MAX;
    if(k<=w){
        q1=solve(index,k+1)+price[index];
    }
    int q2=solve(index+1,k);


return min(q1,q2);
}

int main(){

  
    cin>>n>>w;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        price.push_back(d);
    }

    cout<<solve(0,0)<<endl;


    return 0;
}