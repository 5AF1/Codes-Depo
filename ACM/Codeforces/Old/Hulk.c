#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0 && i==n)
            printf("I love it");
        else if(i==n)
            printf("I hate it");
        else if(i%2==0)
            printf("I love that ");
        else
            printf("I hate that ");
    }
    //printf("\b\b\b\b\bit  ");
}
