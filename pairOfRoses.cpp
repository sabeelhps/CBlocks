#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int,int> >v;

void solve(int *a,int s,int l,int money){

    while(s<l){

        if(a[s]+a[l]==money){
          
            v.push_back(make_pair(s,l-s));
            s++;
            l--;
        }
        else if(a[s]+a[l]>money){
            l--;
        }
        else if(a[s]+a[l]<money){
            s++;
        }

    }
}

int main(){

    int t;
    cin>>t;
    int flag=0;
    while(t--){
        int a[100005];
        int n;

        v.clear();
        if(flag==1){
            cout<<endl;
        }

        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int money;
        cin>>money;

        flag=1;

        sort(a,a+n);


        solve(a,0,n-1,money);
        int min=0,j,i;
        for(auto x:v){
            if(x.second>min){
                i=x.first;
                j=x.second+x.first;
            }
        }
        cout<<"Deepak should buy roses whose prices are " <<a[i]<<" and "<<a[j]<<"."<<endl;
    }

    


    return 0;
}