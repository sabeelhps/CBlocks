#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

#define int long long int

int32_t main(){

    srand(time(NULL));
    int n=0;
    for(int i=0;i<10;i++){
        n=n*10+(rand()%10);
    }

    cout<<n<<endl;



    return 0;
}