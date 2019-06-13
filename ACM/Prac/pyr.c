#include<stdio.h>
int main(){
    int i,j,r;
    scanf("%d",&r);
    printf("\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=(r-i);j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++){
            if(j%2!=0)
                printf("*");
            else
                printf(" ");
        }
         /*for(j=1;j<=(r-i);j++)
            printf("()");*/
        printf("\n");
    }
}
