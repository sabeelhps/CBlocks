#include<iostream>
using namespace std;

#define int long long int

int go(int n){

	if(n<10){
		return n;
	}

	int temp=n;
	int sum=0;
	while(temp!=0){
		int r=temp%10;
		sum+=r;
		temp/=10;
	}

return go(sum);
}
 

int32_t main(){

    int n,k;

    cin>>n>>k;

    int sum=0;

    for(int i=0;i<k;i++){
        sum+=go(n);
        if(sum>9){
            sum=go(sum);
        }
    }
    cout<<sum<<endl;

    return 0;
}