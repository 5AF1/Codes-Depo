#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    ///
    /*if(n==1 || m==1)
        printf("Akshat");
    else if((m*n)%2==0)
        printf("Malvika");
    else
        printf("Akshat");*/
    ///
    if(n<=m && n%2!=0 || n>=m && m%2!=0)
        printf("Akshat");
    else if(n<=m && n%2==0 || n>=m && m%2==0)
        printf("Malvika");
}
