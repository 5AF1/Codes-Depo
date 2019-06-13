#include<stdio.h>
#include<string.h>
int main(){
    char c[101]={};
    int l,i,j,n=0,a;
    gets(c);
    l=strlen(c);
    for(i=0;i<l;i++){
        if(c[i]==32)
            continue;
        a=c[i];
        for(j=i;j<l;j++){
            if(c[j]==a)
                c[j]=32;
        }
        n++;
    }
    if(n%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}
