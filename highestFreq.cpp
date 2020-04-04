#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,int>mp;

int main(){

    int freq[100005]={0};

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];

        freq[a[i]]++;
    }

    int max=0;
    int num;

    for(int i=0;i<100005;i++){
        if(max<freq[i]){
            max=freq[i];
            num=i;
        }
    }

    cout<<num<<endl;


    return 0;
}