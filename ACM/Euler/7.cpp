#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

bool prime_check(long long a){
//    if(a==2) return true;
//    for(long long i=3;i<=sqrt(a);i+=2){
//        if(a%i==0)
//            return false;
//    }
//    return true;

    if(a<=1) return false;
    if(a<=3) return true;

    if(a%2==0 || a%3==0) return false;

    for(long long i=5;i<=sqrt(a);i+=6){
        if(a%i==0 || a%(i+2)==0)
            return false;
    }
    return true;
}

long long next_prime(long long a){
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
    char c;
    int n=10001;
    long long prime=1;
    for(int i=0;i<n;i++){
        prime=next_prime(prime);
        cout<<i+1<<" "<<prime<</*" "<<(prime*prime-1)/24<<*/endl;
        if(i%50==1);
            //cin>>c;
        }
}
