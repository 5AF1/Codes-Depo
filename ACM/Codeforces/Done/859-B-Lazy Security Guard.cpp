#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,x,y;
    cin>>n;
    x=(long long int) sqrt(n);
    y=x;
    if((n-x*y)>0) x++;
    if((n-x*y)>0) y++;
    cout<<(2*(x+y));
}
