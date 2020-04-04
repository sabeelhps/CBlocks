#include <iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
#define ll long long
#define mod 1000000007

unordered_map<ll,unordered_map<ll,ll> >dp;

ll tilingproblem(ll n,ll m){
    if(n>=1 &&n< m){
        return 1;
    }
    else if( n == m){
        return 2;
    }

	if(dp[n][m]){
		return dp[n][m];
	}


    return dp[n][m]=(((tilingproblem(n-1,m)%mod)+(tilingproblem(n-m,m)%mod))%mod);
}

  
// function to count the total number of ways 
int countWays(int n, int m){ 
  
    // table to store values 
    // of subproblems 
    int count[n + 1]; 
    count[0] = 0; 
  
    // Fill the table upto value n 
    for (int i = 1; i <= n; i++) { 
        // recurrence relation 
        if (i > m) 
            count[i] = (count[i - 1] + count[i - m])%mod; 
  
        // base cases 
        else if (i < m) 
            count[i] = 1; 
  
        // i = = m 
        else
            count[i] = 2; 
    } 
  
    // required number of ways 
    return count[n]%mod; 
} 


int main() {
    ll n,m,x;
    ll t;
    cin>>t;
    while(t--){
        cin>>n>>m;
    x=countWays(n,m)%mod;
    cout << x<<endl;

    }
    
	return 0;
}