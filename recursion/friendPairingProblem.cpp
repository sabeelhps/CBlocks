#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<set>
using namespace std;
#define int long long int

unordered_map<int,int>dp;

int solve(int n){

	if(n<3){
		return n;
	}

	if(dp[n]){
		return dp[n];
	}


	return dp[n]=(n-1)*solve(n-2)+solve(n-1);
}

int32_t main(){	

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

		dp.clear();
		
		cout<<solve(n)<<endl;

	}



	return 0;
}