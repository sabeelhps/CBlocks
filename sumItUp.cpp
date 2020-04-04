#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int>v;
set<string>s;

void solve(int index,int sum,int key,string out){

    if(index==v.size()){
        if(sum==key){

            sort(out.begin(),out.end());
            s.insert(out);
       
        }
        return;
    }

    solve(index+1,sum,key,out);
    string c1=to_string(v[index]);
    solve(index+1,sum+v[index],key,out+c1);
    
}

int main(){ 

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;

        v.push_back(d);
    }

    int key;
    cin>>key;

    sort(v.begin(),v.end());

    solve(0,0,key,"");

    for(auto x:s){
        for(int i=0;x[i]!='\0';i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }

   
    return 0;
}