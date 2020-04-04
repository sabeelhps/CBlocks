#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;

bool solve(int index,int  sum,bool taken){
    if(index==vec.size()){
        if(sum==0 &&taken)return true;
        return false;
    }


return solve(index+1,sum,taken)||solve(index+1,sum+vec[index],1);

}

int main(){


    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n;

        vec.clear();


        for(int i=0;i<n;i++){
            cin >> k;
            vec.push_back(k);
        }


        if(solve(0,0,0)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}