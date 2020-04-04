#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

void solve(int n){

    if(n<=0){
        cout<<n<<" ";
        return;
    }

    cout<<n<<" ";
    solve(n-5);
    cout<<n<<" ";

}

int main(){

    int n;
    cin>>n;

    solve(n);
    cout<<endl;

   

    return 0;
}