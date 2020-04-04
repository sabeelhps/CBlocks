#include<iostream>
#include<set>
#include<cstring>
using namespace std;

bool isPalindrome(string str){

    int i=0;
    int j=str.size()-1;

    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }

return true;
}


int solve(string in){
    int ans=0;
    for(int i=0;i<in.size();i++){
        for(int j=i;j<in.size();j++){
            string str="";
            for(int k=i;k<=j;k++){
               str+=in[k];
            }
            if(isPalindrome(str)){
                ans++;
            }
        }
    }
return ans;
}

int main(){

    string in;
    cin>>in;

    cout<<solve(in)<<endl;

  


    return 0;
}