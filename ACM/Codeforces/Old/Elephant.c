#include<stdio.h>
int main(){
    long long int n;
    scanf("%I64d",&n);
    if(n%5==0)
        printf("%I64d",(n/5));
    else
        printf("%I64d",((n/5)+1));
}
