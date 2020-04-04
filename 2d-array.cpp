#include<iostream>
using namespace std;

int main(){

    int ***p=new int**[5];

    for(int i=0;i<10;i++){
        p[i]=new int*[5];
    }

    int count=0;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            p[i][j]=new int[5];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           for(int k=0;k<5;k++){
               p[i][j][k]=++count;
           }
        }
        
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           for(int k=0;k<5;k++){
              cout<<"Element at "<<i<<" "<<j<<" "<<k<<" "<<p[i][j][k]<<"\t";
           }
           cout<<endl;
        }
        cout<<endl;
    }


    return 0;
}