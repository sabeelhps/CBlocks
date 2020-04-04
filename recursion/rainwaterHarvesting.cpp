#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<climits>

using namespace std;

#define int long long int

int solve(int *a,int n){
    int maxL[n];
    int maxR[n];

    maxL[0]=a[0];
    maxR[n-1]=a[n-1];

    for(int i=1;i<n;i++){
        maxL[i]=max(a[i],maxL[i-1]);
    }

    for(int i=n-2;i>=0;i--){
        maxR[i]=max(a[i],maxR[i+1]);
    }
   
    int water=0;

    for(int i=0;i<n;i++){
        water+=min(maxL[i],maxR[i])-a[i];
    }

return water;
}

int32_t main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<solve(a,n)<<endl;

    
    return 0;
}