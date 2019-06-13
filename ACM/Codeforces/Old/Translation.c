#include<stdio.h>
#include<string.h>
int main(){
    char a[101],b[101];
    int i=1;
    gets(a);
    gets(b);
    strrev(b);
    i=strcmp(a,b);
    if(i==0)
        printf("YES");
    else
        printf("NO");
}
