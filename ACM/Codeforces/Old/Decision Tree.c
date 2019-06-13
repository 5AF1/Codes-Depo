#include<stdio.h>
int main(){
    long long int n,i,a;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a);
    if(n%2==0)
        n=n/2;
    else
        n=(n+1)/2;
    printf("%lld",n);
}
