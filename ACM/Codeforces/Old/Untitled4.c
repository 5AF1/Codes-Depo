#include<stdio.h>
int main(){
    int len;
    char a[100];
    gets(a);
    len=strlen(a);
    printf("%d ",len);
    a[6]=0;
    len=strlen(a);
    printf("%d",len);
}
