#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;


int stringtoint(char a[])
{
    int no=0;
    for(int i=0; i<strlen(a); i++)
    {
        int n=(a[i]-'0')*pow(10,(strlen(a)-i-1));
        no=no+n;
    }
    return no;
}

int main()
{
    char a[100];
    cin>>a;
    cout<<stringtoint(a);
    return 0;
}