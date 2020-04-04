#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>


using namespace std;

vector<int>v;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    int q;
    cin>>q;

    while(q--){
        int d;
        cin>>d;
        if(binary_search(v.begin(),v.end(),d)){

            int lb=lower_bound(v.begin(),v.end(),d)-v.begin();
            int ub=upper_bound(v.begin(),v.end(),d)-v.begin()-1;
            

            cout<<lb<<" "<<ub<<endl;
           
        }else{
            cout<<"-1"<<" "<<"-1"<<endl;
        }

    }
   
    return 0;
}