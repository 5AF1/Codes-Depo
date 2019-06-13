#include<bits/stdc++.h>

using namespace std;

int nex(int n,int i){
    while(n%i!=0) i++;
    return i;
}

int main(){
    int n,d=1;
    cin>>n;
    char *str;
    str=new char[n];
    cin>>str;
    while(d!=n){
        d=nex(n,++d);
        //cout<<d<<"*\n";
        for(int i=0;i<(int)floor(d/2);i++){
            swap(str[d-1-i],str[i]);
        }
    }
    cout<<str;
}
