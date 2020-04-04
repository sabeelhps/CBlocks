#include<iostream>
#include<algorithm>
using namespace std;
​
class node{
public:
    int beg; int end;
};
​
bool compare(node a,node b){
    if(a.end==b.end) return a.beg<b.beg;
    return a.end<b.end;
}
​
int main() {
    int n;
    cin>>n;
    node arr[n];
    int c;int r;
    for(int i=0;i<n;++i){
        cin>>c;
        cin>>r;
        arr[i].beg=c-r;
        arr[i].end=c+r;
    }
    sort(arr,arr+n,compare);
    int curr=arr[0].end;
    int done=1;
    for(int i=1;i<n;++i){
        if(arr[i].beg>=curr){
            done++;
            curr=arr[i].end;
        }
    }
    cout<<n-done<<endl;
    return 0;
}
