#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


int main(){

    int n;
    cin>>n;
    int num=0;
    int k=1;
    while(n>0){
        int r=n%10;
        num+=k*pow(10,r-1);
        k++;
        n=n/10;
    }
    cout<<num<<endl;


    return 0;
}