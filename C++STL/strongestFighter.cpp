#include<iostream>
#include<queue>
using namespace std;

vector<int>v;

bool compare(int a,int b){
    return a>b;
}

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    vector<int>ans;
    int i=0;
    while(i<=n-k){
        int j=i;
        v.clear();
        while(j<k+i){
           
            v.push_back(a[j]);
            j++;

        }
       
        sort(v.begin(),v.end(),compare);
        ans.push_back(v[0]);

        i++;
    }

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}