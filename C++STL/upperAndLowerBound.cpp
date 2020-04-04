#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;

    while(t--){
        int num;

        cin>>num;

        cout<<lower_bound(a,num)<<" "<<upper_bound(a,num)<<endl;

    }


    return 0;
}