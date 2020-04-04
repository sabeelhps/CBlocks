#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int myCompare(string X, string Y){
   
   return X+Y>Y+X;
}
int main(int argc, char* argv[])
{
    int t;
    int n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<string> arr;
        for(int i=0;i<n;i++) {
            string temp;
            cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end(), myCompare);
        for(int i=0;i<n;i++) {
            cout<<arr[i];
        }
        cout<<endl;
    }

    return 0;
}