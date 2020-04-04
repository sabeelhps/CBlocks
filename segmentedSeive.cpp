#include<iostream>
using namespace std;

#define int long long int

bool p[1000000];

void seive(){   

    p[0]=p[1]=0;
    p[2]=1;

    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }
   

    for(int i=3;i<=1000000;i+=2){
        if(p[i]){
            for(int j=i*i;j<=1000000;j+=2*i){
                p[j]=0;
            }
        }
    }

return;
}

int segmentedSeive(int a,int b){

    seive();

    bool pp[b-a+1];
    memset(pp,1,sizeof(pp));

    pp[a]=0;

    for(int i=2;i*i<=b;i++){
        for(int j=a;j<=b;j++){

            if(p[i]){
                if(j==i){
                    continue;
                }
                if(j%i==0){
                    pp[j-a]=0;
                }
            }
        }
    }

    int res=0;

    for(int i=a;i<=b;i++){
        if(pp[i]){
            cout<<i-a<<endl;
        }
    }
return res;
}

int32_t main(){


    int a,b;

    int t;
    cin>>t;

    while(t--){

    cin>>a>>b;

    cout<<segmentedSeive(a,b)<<endl;
    }
    return 0;
}