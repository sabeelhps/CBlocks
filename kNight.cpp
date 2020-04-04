#include<iostream>
#include<vector>

using namespace std;

static int ans=0;

bool canPlace(int soln[][10],int i,int j,int n){


    if(i-1>=0 && j-2 >=0 && soln[i-1][j-2]==1){
        return false;
    }
    if(i+1<n && j-2>=0 && soln[i+1][j-2]==1){
        return false;
    }
    if(i+2 <n && j-1 >=0 && soln[i+2][j-1]==1){
        return false;
    }
    if(i+1 <n && j+2 <n && soln[i+1][j+2]==1){
        return false;
    }
    if(i-1 >=0 && j+2 <n && soln[i-1][j+2]==1){
        return false;
    }
    if(i-2 >=0 && j+1 <n && soln[i-2][j+1]==1){
        return false;
    }
    if(i-2>=0 && j-1>=0 && soln[i-2][j-1]==1){
        return false;
    }

return true;
}


void k_Night(int soln[][10],int i,int j,int n,int cnt){
    if(cnt>n)return;
    if(i==n){   

        // Print the configuration
        if(cnt==n){
           ans++;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(soln[i][j])cout <<"{"<<i<<"-"<<j<<"}"<<" " ;
                }

            }
            cout <<" ";
        }
       
        return;
    }

    if(j==n){
        k_Night(soln,i+1,0,n,cnt);
        return ;
    }

    
    
    if(canPlace(soln,i,j,n)){
            soln[i][j]=1;

            k_Night(soln,i,j+1,n,cnt+1);

            soln[i][j]=0;
          
    }
    k_Night(soln,i,j+1,n,cnt);
    
  
}

int main(){

    int n;
    cin>>n;

    int soln[10][10]={0};

    k_Night(soln,0,0,n,0);
    
    cout<<endl;
    cout<<ans<<endl;


    return 0;
}