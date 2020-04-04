#include <iostream>
using namespace std;

int a[10][10]={0};


int fact(int n){

    if(n==0){
        return 1;
    }
return n*fact(n-1);
}

int nCr(int n,int r){

    if(n==0&&r==0){
        return 1;
    }

    return fact(n)/(fact(r)*fact(n-r));
}

void solve(int n){

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j<=i){
              cout<<nCr(i,j)<<" ";
            }else{
                cout<<" "<<" ";
            }         
        }
        cout<<endl;
    }
}

void build(int n){

    a[0][0]=a[1][0]=a[1][1]=1;

    for(int i=2;i<n;i++){
        for(int j=0;j<n;j++){

            if(j==0||j==i){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
}

void buildPascal(int n){

    a[0][n-1]=a[(n/2)-1][n/2+1]=a[(n/2)-1][n]=1;

    for(int i=2;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            // if(j>=n-1-i&&j<n-1+i){
            if(j==n-i-1||j==n-1+i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j+1];
            }
        // }
        }
    }

}

int main(){

    int n;
    cin>>n;

    // solve(n);

    // build(n);
   
    // cout << endl;
     buildPascal(n);


    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(a[i][j]==0){
                cout<<"  ";
            }
            else{
                cout<<a[i][j]<<" ";

            }
           
        }
        cout<<endl;
    }

   


	return 0;
}