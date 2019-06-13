#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    if(b%a!=0)
        cout<<"-1";
    else{
        b=b/a;
        long long c=0;
        while(b%2==0){
            b=b/2;
            c++;
        }
        while(b%3==0){
            b=b/3;
            c++;
        }
        if(b!=1)
            cout<<"-1";
        else
            cout<<c;
    }
}
