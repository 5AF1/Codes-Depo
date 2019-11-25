#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool f(ll a){
    if(a==2 || a==1)
        return false;
    while(a%2==0)
        a/=2;
    if(a==1)
        return true;
    else
        return false;
}

ll sec(){
    ll l,h,w,c=0;
    cin>>l>>h;
    w=(ll)sqrt(h);
    while(w*w>=1){
        if(f(w)){
            w--;
        }
        if(w*w>=l && w*w<=h){
            //cout<<w*w<<"**";
            c++;
        }
        ll t=w*w*2;
        while(t<=h && t!=2){
            if(t>=l){
                //cout<<t<<"*+"<<w<<"+*";
                c++;
            }
            t*=2;
        }
        w--;
    }
    return c;
}

int main(){
    ll n,i=0;
    cin>>n;
    while(i<n){
        i++;
        cout<<"Case "<<i<<": "<<sec()<<'\n';
    }
    //cout<<sec();
}

