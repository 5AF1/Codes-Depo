#include<iostream>

using namespace std;

int main(){
    unsigned long long int a=1,b=2,c=a+b,ans=2;
    cout<<a<<endl<<"*"<<b<<endl;
    while(c<4e6){
        if(c%2==0){
            ans+=c;
            cout<<"*";
        }
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
    cout<<endl<<ans<<endl;
}
