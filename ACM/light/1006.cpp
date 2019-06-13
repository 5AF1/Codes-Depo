#include<iostream>
#include<cstdio>

using namespace std;

//unsigned long long int fn( unsigned long long int n ) {
//    if( n == 0 ) return a;
//    if( n == 1 ) return b;
//    if( n == 2 ) return c;
//    if( n == 3 ) return d;
//    if( n == 4 ) return e;
//    if( n == 5 ) return f;
//    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
//}


long long int a, b, c, d, e, f;
long long int fn[10005];

int main() {
    int n;
    int caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %d", &a, &b, &c, &d, &e, &f, &n);
        fn[0]=a;fn[1]=b;fn[2]=c;fn[3]=d;fn[4]=e;fn[5]=f;
        for(int i=6;i<n+1;i++){
            fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
        }
        printf("Case %d: %lld\n", ++caseno, fn[n]%10000007);
    }
    return 0;
}
