#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<int>v;
set<string>s;

void solve(int start,int end,int sum1,int sum2,string ans1,string ans2){

    if(start>end){

        if(sum1==sum2&&ans1.size()>0&&ans2.size()>0){
            string t=ans1+" and "+ans2;
            // cout<<ans1<<" and "<<ans2<<endl;
            s.insert(t);
        }
        return;
    }

    solve(start+1,end,sum1+v[start],sum2,ans1+to_string(v[start])+" ",ans2);
    solve(start,end-1,sum1,sum2+v[end],ans1,ans2+to_string(v[end])+" ");
    solve(start+1,end,sum1,sum2,ans1,ans2);
    solve(start,end-1,sum1,sum2,ans1,ans2);


}


int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    solve(0,v.size()-1,0,0,"","");

    for(auto x:s){
        cout<<x<<endl;
    }

    return 0;
}