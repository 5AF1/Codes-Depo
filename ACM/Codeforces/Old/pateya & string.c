#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    int i,f,n;
    gets(a);
    n=strlen(a);
    gets(b);
    for(i=0;i<n;i++){
        if(a[i]>=97)
            a[i]=a[i]-32;
        if(b[i]>=97)
            b[i]=b[i]-32;
    }
    f=strcmp(a,b);
    printf("%d",f);
}
