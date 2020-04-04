#include <iostream>
#include <vector>
#include <algorithm>
#include<cstring>
#include<set>
#include<climits>
using namespace std;

int minStep(int n){

    if(n==1){
        return 0;
    }

    int q1=INT_MAX;
    int q2=INT_MAX;
    int q3=INT_MAX;
    
    if(n%2==0){
        q1=1+minStep(n/2);
    }
    if(n%3==0){
        q2=1+minStep(n/3);
    }
    q3=1+minStep(n-1);


return min(q1,min(q2,q3));

}



int main(){

    int n;
    cin>>n;

    cout<<minStep(n)<<endl;

   

    return 0;
}