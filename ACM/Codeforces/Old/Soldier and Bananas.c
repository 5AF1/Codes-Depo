#include<stdio.h>
int main(){
    long int a,k,w,n;
    scanf("%ld %ld %ld",&k,&n,&w);
    a=(k*w*(w+1)/2)-n;
    if(a>0)
        printf("%ld",a);
    else
        printf("%ld",0);
}
