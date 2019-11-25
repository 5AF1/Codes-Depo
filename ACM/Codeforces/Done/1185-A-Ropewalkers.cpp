#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main(){
    lli a,b,c,d,ab,bc,ac;

    cin>>a>>b>>c>>d;

    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(c<b) swap(b,c);

    //cout<<a<<b<<c;

    cout<<(abs(a-b)>=d ? 0 : abs(b-d-a))+(abs(c-b)>=d ? 0 : abs(b+d-c));

}
