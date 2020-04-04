#include<iostream>
using namespace std;

int n;
int a[10000];

int solve(int be,int en,int year){

    if(be>en){
        return 0;
    }

    int q1=a[be]*year+solve(be+1,en,year+1);
    int q2=a[en]*year+solve(be,en-1,year+1);

    return max(q1,q2);

}

int main(){

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<solve(0,n-1,1)<<endl;


    return 0;
}