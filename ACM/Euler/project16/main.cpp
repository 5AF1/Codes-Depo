#include <bits/stdc++.h>
#include "number.h"
using namespace std;

int main()
{
    freopen("16.txt","w",stdout);
    int n;
    cin>>n;
    cout<<'\n';
    number a(2);
    a.print();
    for(int i=2;i<=n;i++){
        a.mult(2);
        cout<<"2^"<<i<<"=";
        a.print();
    }
    cout<<"\nsum="<<a.sum()<<"\ntotal digits="<<a.get_totdigit()<<'\n';
    return 0;
}
