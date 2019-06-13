#include<stdio.h>
char turn(char a, char b);
int mod(int a);
int main(){
    int T,i,j;
    scanf("%d",&T);
    int c[T];
    for(i=0;i<T;i++){
        int n;
        char a[101],b[101];
        scanf("%d %s %s",&n,&a,&b);
        c[i]=0;
        for(j=0;j<n;j++)
            c[i]+=turn(a[j],b[j]);
    }
    for(i=0;i<T;i++)
        printf("Case %d: %d\n",i+1,c[i]);
}
int mod(int a){
    if(a<0)
        return (-1)*a;
    else
        return a;
}
char turn(char a, char b){
    int d;
    a-=48;
    b-=48;
    d=mod(a-b);
    if(d>5)
        d=10-d;
    a=d;
    return a;
}
