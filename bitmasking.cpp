#include<iostream>
using namespace std;

bool isOdd(int n){

    return n&1;
}

int getBit(int n,int i){
  
  return (n&1<<i)>0?1:0;
}
void setBit(int &n,int i){

    int mask=i<<i;

    n=mask|n;


return;
}

void clearBit(int &n,int i){


    int mask=1<<i;
    mask=~mask;

    n=mask&n;

return;
}
void updateBit(int &n,int i,int v){

    int mask=~(1<<i);
    int cleared_n=n&mask;
    n=cleared_n|(v<<i);
}

int decimalToBin(int n){

    int ans=1;
    int p=1;
    while(n){
        ans+=p*(n&1);
        n=n>>1;
        p*=10;
    }

    return ans;
}
int main(){

    int n;
    cin>>n;

    // cout<<getBit(5,2)<<endl;
    // setBit(n,1);

    // clearBit(n,2);
    // updateBit(n,2,0);

    // cout<<n<<endl;

    cout<<decimalToBin(n)<<endl;


    return 0;
}