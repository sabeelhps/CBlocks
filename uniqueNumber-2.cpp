#include<iostream>
using namespace std;
int main() {

	int n;
    cin>>n;

    int a[100005];

    int xr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        xr^=a[i];
    } 

    int pos=0;
    int temp=xr;
    while((temp&1)==0){
        temp=temp>>1;
        pos++;
    }

    int mask=1<<pos;

    int ans1=0;
    for(int i=0;i<n;i++){
        if((mask&a[i])>0){
            ans1^=a[i];
        }
    }
    int ans2=xr^ans1;

    cout<<min(ans1,ans2)<<" "<<max(ans1,ans2)<<endl;






	return 0;
}