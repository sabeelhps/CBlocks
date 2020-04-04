#include<iostream>
using namespace std;


void TOH(char src,char help,char dest,int n){

    if(n==0){
        return;
    }

   

    TOH(src,dest,help,n-1);
    cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
    TOH(help,src,dest,n-1);


}

int main(){

    int n;
    cin>>n;

    TOH('A','C','B',n);


    return 0;
}