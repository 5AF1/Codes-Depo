#include<stdio.h>
int main(){
    int k,l,m,n;
    long int d,i,a=0;
    scanf("%d %d %d %d %ld",&k,&l,&m,&n,&d);
    //printf("%d %d %d %d %ld",k,l,m,n,d);
    for(i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            a++;
    }
    printf("%ld",a);
}
