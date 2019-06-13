#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    for(int i=1;i<=300;i++){
        if(((500000-1000*i)%(1000-i))==0){
            int a=i,b=((500000-1000*i)/(1000-i));
            int c=(int)sqrt(a*a+b*b);
            cout<<a<<' '<<b<<' '<<c<<endl;
            cout<<a*b*c<<' '<<a+b+c;
        }
    }
}
