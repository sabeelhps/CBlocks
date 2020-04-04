#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int solve(int n){

	if(n==0){
		return 0;
	}
    	
	return max(n,solve(n/2)+solve(n/3)+solve(n/4));
}

int main(){

	int n;
	cin>>n;

	cout<<solve(n)<<endl;
    
    

    return 0;
}
