#include<iostream>
#include<climits> 
#include<unordered_map>
using namespace std;


int a[100005];
int pre[100005];

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        memset(pre,0,sizeof(pre));

        pre[0]=1;

        int sum=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];

            sum=abs(sum%n);
            pre[sum]++;

        }

        int ans=0;
        for(int i=0;i<n;i++){
            int m=pre[i];
            ans+=(m*(m-1))/2;
        }
        cout<<ans<<endl;

    }
    return 0;
}