#include<stdio.h>
int add(int n, int *p);
int main(){
    int n,i,a;
    scanf("%d",&n);
    int list[n];
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
    a=add(n,list);
    printf("%d",a);
}
int add(int n, int *p){
    int a=0,i;
    for(i=0;i<n;i++)
        a+=p[i];
    return a;
}
