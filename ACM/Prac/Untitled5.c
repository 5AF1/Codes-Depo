#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    a=n;
    if(n%2==0)
        b=n+1;
    else
        b=n;
    while(b>=3){
        b=b/3;
        n=n+b;
    }
    printf("%d",n);
}
