#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s,int x){

	if(s.empty()){
		s.push(x);
		return;
	}

	int y=s.top();
	s.pop();

	insertAtBottom(s,x);
	s.push(y);
}

void reverseStack(stack<int>&s){

	if(s.empty()){
		return;
	}

	int x=s.top();
	s.pop();

	reverseStack(s);

	insertAtBottom(s,x);

}


int main(){

	stack<int>s;
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		s.push(data);
	}

	reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;


	return 0;
}