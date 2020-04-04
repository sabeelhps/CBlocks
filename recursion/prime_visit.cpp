#include<iostream>
using namespace std;

#define int long long int 

void prime_seive(int *p){

    p[0]=p[1]=0;
    p[2]=1;

    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }

    for(int i=3;i<=1000000;i+=2){
        if(p[i]==1){
            for(int j=i*i;j<=1000000;j+=2*i){
                p[j]=0;
            }
        }
    }
}


int32_t main(){

    int p[1000005]={0};

    prime_seive(p);

    int csum[1000005]={0};

    for(int i=1;i<=1000000;i++){
        csum[i]=csum[i-1]+p[i];
    }

    int q;
    cin>>q;

    while(q--){
        int a,b;
        cin>>a>>b;

        cout<<csum[b]-csum[a-1]<<endl;

    }

    return 0;
}