#include<bits/stdc++.h>

using namespace std;

#define ull unsigned long long

ull factorial(ull n){
    if (n==0 || n==1) return 1;
    else return(n*factorial(n-1));
}


int main(){
    //cout<<ULLONG_MAX;
    //cout<<i<<' '<<factorial(21)<<'\n';
    ull a=1;
    for(int i=1;i<=20;i++){
        a*=i;
        cout<<a<<'\n';
    }
    cout<<'\n'<<ULLONG_MAX-a;
}
