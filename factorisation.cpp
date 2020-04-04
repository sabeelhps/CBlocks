#include<iostream>
#include<vector>

using namespace std;



vector<pair<int,int> > factorisation(int n){

    vector<pair<int,int> >factors;

    int cnt=0;

    while(n%2==0){
        cnt++;
        n/=2;
    }

    if(cnt){
        factors.push_back({2,cnt});
    }

    for(int i=3;i*i<=n;i++){

        if(n%i==0){
            cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            factors.push_back({i,cnt});
        }


    }

    if(n>1){
        factors.push_back({n,1});
    }

return factors;
}

int main(){


    int n;
    cin>>n;

    vector<pair<int,int> >factors=factorisation(n);

    for(auto x:factors){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}