#include<bits/stdc++.h>
using namespace std;

long long trail(long long t){
    long long ans=0;
    for(int i=5;t/i>=1;i*=5){
        ans+=t/i;
    }
    return ans;
}

int main(){
    long long n;
    cin>>n;
    while(n--){
        long long t;
        cin>>t;
        cout<<trail(t)<<endl;
    }
}
