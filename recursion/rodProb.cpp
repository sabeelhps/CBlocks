#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,int>dp;

int maxProfit(int arr[],int totalLen){

    if(totalLen==0){
        return 0;
    }

    if(dp[totalLen]){
        return dp[totalLen];
    }


    int best=0;
    for(int len=1;len<=totalLen;len++){
        int netprofit=arr[len]+maxProfit(arr,totalLen-len);
        best=max(best,netprofit);
    }
     
return dp[totalLen]=best;  
}

int main(){

    int totalLen;
    cin>>totalLen;

    int priceOfEachLen[1000];

    for(int i=1;i<=totalLen;i++){
        cin>>priceOfEachLen[i];
    }

    int ans=maxProfit(priceOfEachLen,totalLen);

    cout<<ans<<endl;


    return 0;
}