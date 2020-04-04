#include<iostream>
#include<queue>
using namespace std;

#define int long long int

int32_t main(){

    int t,k;
    cin>>t>>k;


    priority_queue<int>pq;

    while(t--){
        int ch,x,y;
        cin>>ch;

        if(ch==1){
            cin>>x>>y;
            int temp=x*x+y*y;
            pq.push(temp);

            if(pq.size()>k){
                pq.pop();
            }
        }
        else if(ch==2){
            cout<<pq.top()<<endl;
        }
    
    }



    return 0;
}