#include<stdio.h>
int main(){
    long int a[4],b;
    char i,c=0,j;
    for(i=0;i<4;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<4;i++){
        if(a[i]!=0){
            c++;
            b=a[i];
            for(j=0;j<4;j++){
                if(a[j]==b)
                    a[j]=0;
            }
        }
    }
    printf("%d",4-c);
}
