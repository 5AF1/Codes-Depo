#include<bits/stdc++.h>
#define printf __mingw_printf

using namespace std;

bool is_penta(unsigned long long int a){
    double root=sqrt(24*a+1);
    a=(unsigned long long int)root;
    root=(double)root-(double)a;
    if(root==(double)0 && a%6==5){
        return true;
    }
    return false;
}

int main(){
    //freopen("44.txt","w",stdout);
    for(unsigned long long int i=2;i*(3*i-1)/2<=ULLONG_MAX;i++){
        unsigned long long int p2=i*(3*i-1)/2;
        for(unsigned long long int j=i-1;j>0;j--){
            unsigned long long int p1=j*(3*j-1)/2,di=p2-p1,ad=p2+p1;
            if(is_penta(di)&&is_penta(ad)){
                printf("%lld\n",di);
            }
        }
    }
    //fclose(stdout);
}
