#include<bits/stdc++.h>
#define printf __mingw_printf

using namespace std;

int main(){
    double p,q_,p_;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    p=((double)a/(double)b);p_=1-p;
    q_=1-(double)((double)c/(double)d);
    p=p/(1-(p_*q_));
    printf("%.12lf",p);
}
