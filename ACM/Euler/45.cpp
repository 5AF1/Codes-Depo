#include<bits/stdc++.h>
#define printf __mingw_printf

using namespace std;

int main(){
    freopen("45.txt","w",stdout);
    for(unsigned long long int i=1;i*(2*i-1)<=ULLONG_MAX;i++){
        unsigned long long int hexa=i*(2*i-1);
        double root=sqrt(24*hexa+1);
        hexa=(unsigned long long int)root;
        root=(double)root-(double)hexa;
        if(root==(double)0 && hexa%6==5){
            printf("%lld\n",i*(2*i-1));
        }
    }
    fclose(stdout);
}
