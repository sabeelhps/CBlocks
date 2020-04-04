#include<iostream>
using namespace std;

bool ratInMaze(char maz[1000][1000],int soln[][1000],int i,int j,int m,int n){


	if(i==m&&j==n){

        soln[m][n]=1;

		for(int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
      
		exit(0);
		return true;
	}

	if(i>m||j>n){
		return false;
	}

	if(maz[i][j]=='X'){
		return false;
	}

	soln[i][j]=1;

	bool successRight=ratInMaze(maz,soln,i,j+1,m,n);
	bool downSuccess=ratInMaze(maz,soln,i+1,j,m,n);

	soln[i][j]=0;

	if(successRight||downSuccess){
		return true;
	}

	return false;

}
int main() {

	int m,n;
	cin>>m>>n;

	char maz[1000][1000];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>maz[i][j];
		}
	}

	int soln[1000][1000]={0};

	bool ans=ratInMaze(maz,soln,0,0,m-1,n-1);

	if(ans!=true){
		cout<<"-1"<<endl;
	}

	return 0;
}