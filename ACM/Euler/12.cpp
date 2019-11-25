#include<bits/stdc++.h>

using namespace std;
#define ull unsigned long long

ull totalfactor(ull n){
    ull c=0;
    if(n==1) return 1;
    for(ull i=1;i<=sqrt(n);i++){
        if(n%i==0) c+=2;
        if(i==sqrt(n)) c--;
    }
    return c;
}


int main(){
    ull n=15,c=0,i,a;
    //cout<<totalfactor(15);
    for(i=2,a=1;c<500;a+=i,i++){
        //cout<<a<<'=';
        c=totalfactor(a);
        //cout<<c<<'\n';
    }
    cout<<a-i+1;
}
