#include<stdio.h>
int main(){
    int list[10]={3,12,5,2,7,9,3,12,4,9},lis[10];
    int i,max,j,a;
    for(j=0;j<10;j++){
        max=0;
        for(i=0;i<10;i++){
            if(max<list[i]){
                max=list[i];
                a=i;
            }
        }
        lis[j]=max;
        list[a]=0;
    }
    printf("{");
    for(i=0;i<10;i++){
        printf("%d,",lis[i]);
    }
    printf("\b}");
}
