#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>

using namespace std;

unordered_map<int,unordered_map<int,string> >dp;

string in1;
string in2;

string maxString(string a,string b){

    return a.size()>=b.size()?a:b;
}

string solve(int i1,int i2){

    if(dp[i1][12]!=""){
        return dp[i1][i2];
    }

    if(i1==in1.size()||i2==in2.size()){
       
        return "";
    }

    

    if(in1[i1]==in2[i2]){
        return dp[i1][i2]=in1[i1]+solve(i1+1,i2+1);
    }
    return dp[i1][i2]=maxString(solve(i1+1,i2),solve(i1,i2+1));

}



int main(){

    cin>>in1;
    cin>>in2;

    cout<<solve(0,0)<<endl;




    return 0;
}