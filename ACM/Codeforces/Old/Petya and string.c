#include<stdio.h>
#include<string.h>
int main(){
    int i,n,A=0,B=0;
    char a[101],b[101];
    gets(a);
    n=strlen(a);
    gets(b);
    for(i=0;i<n;i++){
        if(a[i]>=97)
            a[i]=a[i]-32;
        A=A+a[i];
    }
    for(i=0;i<n;i++){
        if(b[i]>=97)
            b[i]=b[i]-32;
        B=B+b[i];
    }
    if(A==B)
        printf("0");
    else if(A>B)
        printf("1");
    else if(A<B)
        printf("-1");
}
