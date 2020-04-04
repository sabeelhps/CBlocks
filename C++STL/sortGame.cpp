#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


pair<string,int>a[100005];

bool compare(pair<string,int>&a,pair<string,int>&b){

    if(a.second>b.second){
        return true;
    }
    else if(a.second==b.second){
        return a.first<b.first;
    }
    return false;

}


int main(){ 

    int x;
    cin>>x;

    int n;

    cin>>n;

    int k=0;
    for(int i=0;i<n;i++){
        string s;
        int sal;
        cin>>s>>sal;

        if(sal>=x){
            a[k].first=s;
            a[k].second=sal;
            k++;
        }
    }

    sort(a,a+k,compare);

    for(int i=0;i<k;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }





    return 0;
}