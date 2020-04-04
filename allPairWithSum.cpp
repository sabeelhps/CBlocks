#include<iostream>
#include<algorithm>
using namespace std;

#define int long long int


int32_t main(){ 

    int t;
    cin>>t;

    while(t--){
        int n,m,sum;
        cin>>n>>m>>sum;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

       

        int b[m];

        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+m);

        int l=0;
        int r=m-1;

        while(l<n&&r>=0){

            if(a[l]+b[r]==sum){
                cout<<a[l]<<" "<<b[r]<<endl;
                l++;
                r--;
            }
            else if(a[l]+b[r]>sum){
                r--;
            }
            else{
                l++;
            }

        }
    }


    return 0;
}