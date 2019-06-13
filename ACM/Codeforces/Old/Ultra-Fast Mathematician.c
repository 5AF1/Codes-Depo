#include<stdio.h>
#include<string.h>
int main(){
    int i,l;
    char a[101],b[101];
    gets(b);
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]==b[i])
            printf("0");
        else
            printf("1");
    }
}
