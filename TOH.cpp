#include<iostream>
using namespace std;

char keypad[][10]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

static int n=0;

void keypadCodes(char *in,char *out,int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        n++;
        return;
    }

    

    int digit=in[i]-'0';

    if(digit==0){
        keypadCodes(in,out,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++){
        out[j]=keypad[digit][k];
        keypadCodes(in,out,i+1,j+1);
    }

}


int main() {

    char in[100];
    char out[100];

    cin>>in;

    keypadCodes(in,out,0,0);

    cout<<endl;
    cout<<n<<endl;

	
	return 0;
}