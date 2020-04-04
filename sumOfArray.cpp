#include<iostream>
using namespace std;

void reverse(int *a,int n){

    int i=0;
    int j=n-1;

    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }

}

int main(){ 

    int a[1000];
    int b[1000];

    int m,n;
    cin>>m;

    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    reverse(a,m);
    reverse(b,n);

    int i=0;
    int j=0;
    int c[1000];
    int k=0;
    int carry=0;
    while(i<m&&j<n){
        
        int temp=a[i]+b[j]+carry;
        if(temp>9){
            c[k++]=temp%10;
            carry=temp/10;
        }else{
            c[k++]=temp;
            carry=0;
        }
        i++;
        j++;
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }


    for(int i=k-1;i>=0;i--){
        cout<<c[i]<<", ";
    }
    cout<<"END";
    cout<<endl;





    return 0;
}