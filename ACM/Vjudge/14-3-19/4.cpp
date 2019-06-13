#include <iostream>
#include <algorithm>

using namespace std;

int __lcm(int m,int n){
    return (m*n)/(__gcd(m,n));
}
int mod(int num,int base){
    if(num>=0)
        return num%base;
    else{
        num*=-1;
        num=num%base;
        return base-num;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,r,lcm,ans;
        cin>>n>>d>>r;
        if(d>n/2){
            d=d-n;
            d=mod(d,n);
        }
        if(r>n/2){
            r=r-n;
            r=mod(r,n);
        }
        lcm=__lcm(d,r);
        ans=lcm/(d<r?d:r);
        cout<<ans<<endl;
    }
}
