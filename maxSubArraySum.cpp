#include<iostream>
using namespace std;

int main(){

    int a[100005];
    int n;


    int t;
    cin>>t;

    while(t--){
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int cs=0;
        int ms=0;

        for(int i=0;i<n;i++){
            cs+=a[i];

            if(cs<0){
                cs=0;
            }

            ms=max(cs,ms);
        }
        cout<<ms<<endl;
    }


    return 0;
}