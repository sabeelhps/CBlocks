#include<iostream>
#include<algorithm>
using namespace std;


bool compare(pair<string,int>a,pair<string,int>b){

    if(a.second>b.second){
        return true;
    }else if(a.first==b.first){
        return a.first<b.first;
    }


return false;
}

int main(){

    int mSalary;
    cin>>mSalary;

    int n;

    cin>>n;

    pair<string,int>a[1000];

    for(int i=0;i<n;i++){
        int temp;
        string s;

        cin>>s>>temp;

        if(mSalary<=temp){
            a[i].second=temp;
            a[i].first=s;
        }
        
    }

    sort(a,a+n,compare);

    for(int i=0;i<n;i++){
        if(a[i].second!=0){
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }
    }




    return 0;
}