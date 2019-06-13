#include<stdio.h>
int f(int a,int b);
int main(){
    int n,m,d;
    scanf("%d %d",&n,&m);
    d=n+f(n,m);
    printf("%d",d);
}
int f(int a,int b){
    if(a/b==0)
        return 0;
    int d;
    d=a/b+f((a/b)+(a%b),b);
    return d;
}
