#include<stdio.h>
int main(){
    int n,h,w=0,i,a;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a>h)
            w+=2;
        else
            w++;
    }
    printf("%d",w);
}
