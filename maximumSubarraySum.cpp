#include<iostream>
#include<climits>
using namespace std;

#define int long long int

int kadane(int *a,int n){

    int cs=0;
    int ms=INT_MIN;

    for(int i=0;i<n;i++){
        cs+=a[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
return ms;

}

int32_t main() {

    int t;
    cin>>t;

    while(t--){
        int a[100005];
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<kadane(a,n)<<endl;

    }
	
	return 0;
}