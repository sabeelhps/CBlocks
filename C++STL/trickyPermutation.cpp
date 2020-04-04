#include<iostream>
#include<cstring>
#include<set>
using namespace std;

set<string>s;

void solve(string in,string out){


	if(in.size()==0){

        if(s.find(out)==s.end())
		cout<<out<<endl;
        
        s.insert(out);
		return;
	}

	for(int i=0;i<in.size();i++){
		char c1=in[i];
		solve(in.substr(0,i)+in.substr(i+1),out+c1);
	}
}

int main(){

	string in;
	cin>>in;
    sort(in.begin(),in.end());
	solve(in,"");
	return 0;
}