#include<iostream>
#include<cmath>
using namespace std;

int main(){
    unsigned long long int a=600851475143,b=186615,c=20503125;//5 13 11 3 3 29 // 8 3 5 5
    while(c!=1){
        static int i=3;
        if(c%i==0){
            cout<<i<<endl;
            c/=i;
        }
        else
            i+=2;
    }
    return 0;
}
