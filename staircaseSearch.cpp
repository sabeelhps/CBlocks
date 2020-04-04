#include<iostream>
using namespace std;

int a[10][10];

bool staircaseSearch(int m,int n,int key){

    int i=0;
    int j=n-1;

    while(i<m&&j>=0){

        if(a[i][j]==key){
            return true;
        }
        else if(a[i][j]<key){
            i++;
        }
        else if(a[i][j]>key){
            j--;
        }
    }

return false;


}

int main(){

    

    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    // staircaseSearch(m,n,key)
    int key;
    cin>>key;
    if(staircaseSearch(m,n,key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }


    return 0;
}