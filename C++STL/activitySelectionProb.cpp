#include<iostream>
using namespace std;

class node{
public:

    int start;
    int end;

};

bool comapare(node a,node b){
    return a.end<b.end;
}

int main(){


    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        node a[n];
      

        for(int i=0;i<n;i++){
            cin>>a[i].start>>a[i].end;
        }

        sort(a,a+n,comapare);

        int ans=1;
        int level=a[0].end;

        for(int i=1;i<n;i++){
            if(level<=a[i].start){
                level=a[i].end;
                ans++;
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}