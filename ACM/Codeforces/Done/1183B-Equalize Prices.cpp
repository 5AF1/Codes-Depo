#include<bits/stdc++.h>

using namespace std;

#define ll long long

int sec(){
    ll n,k;
    cin>>n>>k;
    vector <ll> ar;
    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        ar.push_back(t);
    }
    sort(ar.begin(),ar.end());
    ll s=ar.front(),l=ar.back();
    if(s+k>=l-k) cout<<s+k<<'\n';
    else cout<<"-1\n";
    return 0;
}

int main(){
    ll q;
    cin>>q;
    while(q--)
        sec();
    return 0;
}
