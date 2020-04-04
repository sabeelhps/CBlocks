#include<iostream>
#include<vector>
using namespace std;

#define int long long int 
const int N=100000005;
bool primes[N];

vector<int>v;
void seive(){

    primes[2]=1;
    v.push_back(2);
    for(int i=3;i<N;i+=2){
        primes[i]=1;
    }

    for(int i=3;i<N;i+=2){

        if(primes[i]){
            v.push_back(i);
            for(int j=i*i;j<N;j+=2*i){
                primes[i]=0;
            }
        }
    }
}

int32_t main(){

    seive();  

    int n;
    cin>>n;

    cout<<v[n-1]<<endl;  
return 0;
}