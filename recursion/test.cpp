#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	char a[10][10];

	int m,n;
	cin>>m>>n;

	int sr=0;
	int er=m-1;
	int sc=0;
	int ec=n-1;



		while(sr<=er&&sc<=ec){

			// first column 
			if(sr%2==0){
				for(int i=sr;i<=er;i++){
					a[i][sc]='0';
				}
				sc++;
			}else{
				for(int i=sr;i<=er;i++){
					a[i][sc]='*';
				}
				sc++;

			}


			// end row
			if(n%2==0){
				if(er%2!=0){
					for(int j=sc;j<=ec;j++){
						a[er][j]='0';
					}
					er--;
				}else{
					for(int j=sc;j<=ec;j++){
						a[er][j]='*';
					}
					er--;
				}
			}else{
				if(er%2==0){
					for(int j=sc;j<=ec;j++){
						a[er][j]='0';
					}
					er--;
				}else{
					for(int j=sc;j<=ec;j++){
						a[er][j]='*';
					}
					er--;
				}

			}

			// end column

			if(n%2==0){
				if(ec%2!=0){
					for(int i=er;i>=sr;i--){
						a[i][ec]='0';
					}
					ec--;
				}else{
					for(int i=er;i>=sr;i--){
						a[i][ec]='*';
					}
					ec--;
				}
			}else{
				if(ec%2==0){
					for(int i=er;i>=sr;i--){
						a[i][ec]='0';
					}
					ec--;
				}else{
					for(int i=er;i>=sr;i--){
						a[i][ec]='*';
					}
					ec--;
				}

			}

			// starting row

			if(sr%2==0){
				for(int j=ec;j>=sc;j--){
					a[sr][j]='0';
				}
				sr++;
			}else{
				for(int j=ec;j>=sc;j--){
					a[sr][j]='*';
				}
				sr++;

			}

		}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}




    return 0;
}