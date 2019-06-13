#include<stdio.h>
int main(){
    int n,i,a=0;
    scanf("%d ",&n);
    char sto[n+1];
    gets(sto);
    for(i=0;i<n;i++){
        if(sto[i]==sto[i+1])
            a++;
    }
    printf("%d",a);
}
