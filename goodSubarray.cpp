#include<iostream>
using namespace std;


int goodSubArray(int *a,int *cs,int n){

    int ans=0;
    int currenSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currenSum=0;
            cout<<cs[i-1]<<" ";
            currenSum=cs[j]-cs[i-1];
            if(currenSum%n==0){
                ans++;
            }
        }
    }

return ans;
}

int main(){
    
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[100005];

        int cs[100005];

        cin>>a[0];
        cs[0]=a[0];

        for(int i=1;i<n;i++){
            cin>>a[i];
            cs[i]=cs[i-1]+a[i];
        }
        cout<<goodSubArray(a,cs,n)<<endl;

    }


    return 0;
}