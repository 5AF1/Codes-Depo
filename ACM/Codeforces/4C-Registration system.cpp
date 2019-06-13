#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=10;
    char *str;
    str=new char[n];
    cin>>str;
    swap(str[2],str[5]);
    cout<<str;
}
