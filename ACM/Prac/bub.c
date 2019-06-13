#include<stdio.h>
int main(){
    int inp[]={9,8,7,6,5,0,1,2,3,4};
    int i,j,a;
    for(j=1;j<=9;j++){
        for(i=j;i>=1;i--){
            if(inp[i]<inp[i-1]){
                inp[i]=inp[i]+inp[i-1];
                inp[i-1]=inp[i]-inp[i-1];
                inp[i]=inp[i]-inp[i-1];
            }
            printf("iteration %d\t",i);
            for(a=0;a<10;a++)
                printf("%d ",inp[a]);
            printf("\n");
        }
    }
    printf("\t");
    for(i=0;i<10;i++)
        printf("%d ",inp[i]);
    return 0;
}

