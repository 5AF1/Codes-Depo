#include<stdio.h>
int main(){
    unsigned long long int n;
    scanf("%I64u",&n);
    n++;
    if(n==1)
        n=0;
    else if(n%2==0)
        n=n/2;
    printf("%I64u",n);
}
