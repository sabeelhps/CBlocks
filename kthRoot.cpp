#include<iostream>
using namespace std;

#define int long long int 
#define ld long double

const int N=100005;

ld powr(int a,int b){

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


int solve(ld n,int k){

    int  s=1;
    int  e=n;
    ld ans=0;
    while(s<=e){

        int m=(s+e)/2;

        if(powr(m,k)<=n){
            ans=m;
            s=m+1;
        }
        else if(powr(m,k)>n){
            e=m-1;
        }


    }

return ans;
}

int32_t main(){ 

    
    int t;
    cin>>t;

    while(t--){

        int k;
        ld n;
        cin>>n>>k;

        cout<<solve(n,k)<<endl;

    }

    return 0;
}