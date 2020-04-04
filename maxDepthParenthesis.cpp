#include<iostream>
#include<stack>
#include<vector>

using namespace std;


int solve(string a){

    vector<char>s;


    int ans=-1;
    int i=0;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='('){
            cnt++;
        }
        else if(a[i]==')'){
            cnt--;
        }
    }

    if(cnt!=0){
        return -1;
    }

    while(a[i]!='\0'){

        if(a[i]=='('){
           
            s.push_back(a[i]);
           
            if(ans<int(s.size())){
                
                ans=s.size();
               
            }
        
        }
        else if(a[i]==')'){
            s.pop_back();
        }
        i++;
    }


return ans;
}


int main(){

    string a;
   
    int t;
    cin>>t;

    for(int i=0;i<t;i++){

        cin>>a;


        cout<<solve(a)<<endl;
    }


  


    return 0;
}