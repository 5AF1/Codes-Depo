#include<stdio.h>
int main(){
    int a,b,c,f=0;
    while(1){
        f=0;
        scanf("%d %d %d",&a,&b,&c);
        if(((a*a+b*b)==(c*c))||((a*a+c*c)==(b*b))||((b*b+c*c)==(a*a)))
            f=1;
        if(a==0 && b==0 && c==0)
            break;
        else if(f)
            printf("right\n");
        else
            printf("wrong\n");
    }
}
