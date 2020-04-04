#include<iostream>
using namespace std;
string str;

bool isBalanced(int index,string out){
    // cout <<index<<endl;
    if(index==str.size()){
        return out.size()==0;
        // return true;
    }

    if(str[index]=='['){
        return isBalanced(index+1,out+str[index]);
    }
    if(str[index]=='{'){
        return isBalanced(index+1,out+str[index]);
    }
    if(str[index]=='('){
        return isBalanced(index+1,out+str[index]);
    }
    if(str[index]==']'){
        if(out[out.size()-1]!='['){
            return false;
        }
        else{
            out.erase(out.size()-1);
        }
    }

    if(str[index]=='}'){
        if(out[out.size()-1]!='{'){
            return false;
        }
        else{
            out.erase(out.size()-1);
        }
    }

    if(str[index]==')'){
        if(out[out.size()-1]!='('){
            return false;
        }
        else{
            out.erase(out.size()-1);
        }
    }

    return isBalanced(index+1,out);
}


int main() {

	cin>>str;

	if(isBalanced(0,"")){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}



	return 0;
}