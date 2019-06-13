#include<stdio.h>
int main(){
    int x=0,n,i;
    char com[4];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        gets(com);
        if(com[1]=='+')
            x++;
        else if(com[1]=='-')
            x--;
    }
    printf("%d",x);
}
