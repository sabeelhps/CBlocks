#include<iostream>
#include<queue>
#include<cstring>
using namespace std;


int main(){

    priority_queue<int,vector<int>,greater<int> >pq;

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        while(n--){
        
            string q;
            cin>>q;

            if(q=="p"){
                int d;
                cin>>d;
                pq.push(d);
                cout<<pq.size()<<endl;
            }
            else if(q=="pp"){
                pq.pop();
                cout<<pq.size()<<endl;
            }

            else if(q=="t"){
                if(!pq.empty()){
                    cout<<pq.top()<<endl;
                }else{
                    cout<<"-1"<<endl;
                }
            }
        }

    }

    return 0;
}