#include<iostream>
using namespace std;


class node{
public:

    int start;
    int end;
};

bool compare(node a,node b){

    return a.end<b.end;
}
int main(){

    int n;
    cin>>n;
    node a[n];

    for(int i=0;i<n;i++){
        int c,r;
        cin>>c>>r;
        a[i].start=c-r;
        a[i].end=c+r;
    }

    sort(a,a+n,compare);

    int ans=1;
    int limit=a[0].end;

    for(int i=1;i<n;i++){
        if(limit<=a[i].start){
            limit=a[i].end;
            ans++;
        }
    }
    cout<<n-ans<<endl;



    return 0;
}