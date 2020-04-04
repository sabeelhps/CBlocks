#include<iostream>
#include<vector>
using namespace std;

#define int long long int
const int N=1000005;


void seive(int *p){

    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<N;i+=2){
        p[i]=1;
    }
    
    for(int i=3;i<N;i+=2){
        
        if(p[i]){
          
            for(int j=i*i;j<N;j+=2*i){
                p[j]=0;
            }
        }
    }

}

int32_t main(){ 

    int p[N]={0};

    seive(p);


    int t;
    cin>>t;

    while(t--){    
       int a,b;
       cin>>a>>b;
        int ans=0;
        for(int i=a;i<=b;i++){

            if(p[i]){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}