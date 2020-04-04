#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

#define int long long int

vector<int>v;

static int ans=0;

int powr(int a,int b){

    int res=1;

    while(b){
        if(b&1){
            res*=a;
        }
        a*=a;
        b/=2;

        
    }
return res;
}


void solve(int index,int sum,int n,int x){

    if(v.size()==index){
        if(n==sum){
            ans++;
        }
        return;
    }

    solve(index+1,sum,n,x);
    solve(index+1,sum+powr(v[index],x),n,x);
}


int32_t main(){

    int n,x;

    cin>>n>>x;

    int y=sqrt(n);

    for(int i=0;i<y;i++){
        v.push_back(i+1);
    }

    solve(0,0,n,x);

    cout<<ans<<endl;

    return 0;
}