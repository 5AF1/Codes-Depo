#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

bool prime_check(unsigned long long a){
    if(a<=1) return false;
    if(a<=3) return true;

    if(a%2==0 || a%3==0) return false;

    for(unsigned long long i=5;i<=sqrt(a);i+=6){
        if(a%i==0 || a%(i+2)==0)
            return false;
    }
    return true;
}

unsigned long long next_prime(unsigned long long a){
    a++;
    if(a%2==0 && a!=2) a++;
    while(1){
        if(prime_check(a))
            return a;
        else
            a+=2;
    }
}



int main(){
    unsigned long long a=1,i,ans=0;
    for(i=1;;i++){
        a=next_prime(a);
        if(a>2000000) break;
        ans+=a;
        //cout<<i<<" "<<a<<" "<<ans<<" "<<endl;
    }
    cout<<ans<<endl;
}
