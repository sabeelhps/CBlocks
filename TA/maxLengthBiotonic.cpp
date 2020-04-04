#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

#define int long long int

int longestSumBitonicSub(int *arr, int n) {
	
    int LIS[n], LDS[n];
	
    
    for(int i=0;i<n;i++) {
		LIS[i] = arr[i];
		
        LDS[i] = arr[i];
	}
	for(int i=1;i<n;i++) {
		for(int j=0;j<i;j++) {
			
            if(arr[i]>arr[j] and LIS[i]<LIS[j]+arr[i]) {
				 LIS[i] = LIS[j]+arr[i];
			}
		}
	}
	for(int i=n-2;i>=0;i--) {
		
        for(int j=n-1;j>i;j--){
			
            if(arr[i]>arr[j] and LDS[i]<LDS[j]+arr[i]) {
				LDS[i] = LDS[j] + arr[i];
			}
		}
	}
	int result = INT_MIN;
	for(int i=0;i<n;i++) {
		result = max(result, (LDS[i] + LIS[i] - arr[i])); 
	}
	return result;
}

int32_t main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<longestSumBitonicSub(a,n)<<endliiiiiLi;

	return 0;
}