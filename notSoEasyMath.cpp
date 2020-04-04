#include<iostream>
using namespace std;

#define int long long int

int32_t main(){

    int t;
    cin>>t;

    int primes[]={2,3,5,7,11,13,17,19};

    while(t--){

        int n;
        cin>>n;
        int ans=0;

        int subsets=(1<<8)-1;

        for(int i=1;i<=subsets;i++){

            int setBits=__builtin_popcount(i);
            int denom=1;
            for(int j=0;j<=7;j++){
               
                if(i&(1<<j)){
                    denom*=primes[j];
                }
            }

            if(setBits&1){
                ans+=n/denom;
            }else{
                ans-=n/denom;
            }

        }

    cout<<ans<<endl;

    }
    return 0;
}