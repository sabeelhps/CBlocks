#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<unordered_map>

#define size 1000
 
using namespace std;

bool dp[size][size];

int main(){


    int n,m;
    
    string s,p;
    
    cin>>s>>p;
    
    n=s.length();
    
    m=p.length();
    
    memset(dp,0,sizeof dp);
    
    dp[0][0] = true;
    for (int j = 1; j <= m; j++)
        if (p[j - 1] == '*')
            dp[0][j] = dp[0][j - 1];
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		if(p[j-1]=='*')
    			dp[i][j]=dp[i-1][j]|dp[i][j-1];
    		else if(p[j-1]==s[i-1] || p[j-1]=='?')
    			dp[i][j]=dp[i-1][j-1];
    	}
    }

    if(dp[n][m])
    	cout<<"MATCHED"<<endl;
    else
    	cout<<"NOT MATCHED"<<endl;
    return 0;
}