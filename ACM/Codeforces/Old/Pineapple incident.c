#include<stdio.h>
int main(){
    long long int t,s,x,i,b;
    int f=0;
    scanf("%I64d %I64d %I64d",&t,&s,&x);
    if(t==x)
        printf("YES");
    else{
        b=(x-t);
        if(b>=s&&(b%s==0 || (b-1)%s==0))
            f=1;
        /*for(i=1,b=t+s*i;b+1<=x || b<=x;i++){
            b=t+s*i;
            //printf("%d %d " ,b ,b+1);
            if(x==b+1||x==b){
                f=1;
            }
        }*/
        if(f==1)
            printf("YES");
        else
            printf("NO");
    }
}
