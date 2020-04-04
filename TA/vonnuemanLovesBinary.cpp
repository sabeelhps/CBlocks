#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

#define int long long int

int32_t main(){p

    int n;
    cin >>n;
    
    int a[n];
    
    for (int i = 1; i <= n; i++)
        cin >> a[i-1];
    int sum = 0, power = 1;
   

   
    for (int i = 0; i < n; i++){
   
   
    while (a[i] != 0){
        int t;
        t = a[i]%10;
        
        a[i] = a[i]/10;
        
        sum = sum + t*power;
        
        power = power*2;
    }
    cout << sum << endl;
    sum = 0;
    power = 1;
    }

    return 0;
}


