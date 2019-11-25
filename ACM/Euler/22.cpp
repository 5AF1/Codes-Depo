#include<bits/stdc++.h>
#define printf __mingw_printf
#define ull unsigned long long int

using namespace std;

ull next_divisor(ull n,ull next_to){
    if(n==next_to)
        return n;
    next_to++;
    //cout<<'-';
    while(n%next_to!=0){
        next_to++;
    }
    return next_to;
}
ull divisor_sum(ull n){
    ull div=next_divisor(n,1),sum=0;
    //sum+=div;sum+=n/div;
    //cout<<div<<' '<<n/div<<' '<<sum<<endl;
    while(div<(ull)sqrt(n)){
        sum+=div;sum+=n/div;
        //cout<<div<<' '<<n/div<<' '<<sum<<endl;
        div=next_divisor(n,div);
    }
    return sum+1;
}
ull amicable_number(ull n){
    ull m=divisor_sum(n);
    ull o=divisor_sum(m);
    if(o==n)
        return m;
    else
        return n;
}
int main(){
    ull sum=0;
    for(ull i=2;i<1000000;i++){
        ull j=amicable_number(i);
        if(i!=j){
            sum+=i;sum+=j;
            cout<<i<<' '<<j<<'\n';
            i=j;
        }
    }
    cout<<sum;
}
