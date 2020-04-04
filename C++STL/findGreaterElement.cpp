#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>

using namespace std;

unordered_map<int,int>mp;
vector<int>v;

int main(){

	int n;
	cin>>n;

	int a[100005];

	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		a[i]=d;
		v.push_back(d);
	}

	sort(v.begin(),v.end());

	for(int i=0;i<n-1;i++){
		mp[v[i]]=v[i+1];
		
	}
	mp[v[n-1]]=-1;

	for(int i=0;i<n;i++){
		cout<<mp[a[i]]<<" ";
	}
	cout<<endl;


	return 0;
}