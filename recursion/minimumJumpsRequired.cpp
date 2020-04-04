#include<iostream>
#include<climits>
using namespace std;


int solve(int *a,int i,int n){

    if(i==n){
        return INT_MAX;
    }

    int j=a[i];

    int best=0,current=0;
    for(int k=1;k<=j;k++){
        if(i+k<=n)
        current=1+solve(a,i+k,n);
        best=min(best,current);
    }
    
    return best;
}

int main(){

    int t;
    cin>>t;


    while(t--){

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans=solve(a,0,n);

        cout<<ans<<endl;


    }


    return 0;
}