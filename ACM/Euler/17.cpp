#include<bits/stdc++.h>

#define ull unsigned long long

using namespace std;

ull val(ull n){
    ull ans=0,m=n%100;
    n=n/100;
    if(n==10)
        ans+=3+8;                   ///one thousand
    else if(n==8 || n==7 || n==3)
        ans+=5+7;                   ///seven eight three hundred
    else if(n==4 || n==5 || n==9)
        ans+=4+7;                   ///four five nine hundred
    else if(n==1 || n==2 || n==6)
        ans+=3+7;                   ///one two six hundred
    if(m!=0){
        if(n!=0)
            ans+=3;                 ///and
        n=m/10;
        m=m%10;
        if(n==1){
            if(m==0)
                ans+=3;
            else if(m==1 || m==2)
                ans+=6;             ///eleven twelve
            else if(m==3 || m==4 || m==8 || m==9)
                ans+=4+4;           ///thir four eigh nine teen
            else if(m==5 || m==6)
                ans+=3+4;           ///fif six teen
            else if(m==7)
                ans+=5+4;           ///seven teen
        }
        else{
            if(n==2 || n==3 || n==8 || n==9)
                ans+=4+2;           ///twen thir eigh nine ty
            else if(n==5 || n==6 || n==4)
                ans+=3+2;           ///fif six for ty
            else if(n==7)
                ans+=5+2;           ///seven ty
            if(m==1 || m==2 || m==6)
                ans+=3;             ///one two six
            else if(m==4 || m==5 || m==9)
                ans+=4;             ///four five nine
            else if(m==3 || m==7 || m==8)
                ans+=5;             ///three seven eight
        }
    }
    return ans;
}


int main(){
    freopen("17o.txt","w",stdout);
    ull a=0;
    for(ull i=1;i<=1000;i++){
        a+=val(i);
        cout<<i<<" "<<a<<" "<<val(i)<<'\n';
    }
    cout<<a;
}
