#include<stdio.h>
int main(){
    int num,f=0,i,r,n;
    int dig[5];
    scanf("%d",&num);
    if(num%4==0 || num%7==0 || num%47==0 || num%74==0 || num%447==0 || num%474==0 || num%477==0 || num%744==0 || num%747==0 || num%774==0)
        f=1;
    else{
        r=num;
        for(i=0;r!=0;i++){
            dig[i]=r%10;
            r=r/10;
        }
        n=i;
        for(i=0;i<n;i++){
            if(dig[i]==4 || dig[i]==7)
                continue;
            else
                break;
        }
        if(i==n)
            f=1;
    }
    if(f==1)
        printf("YES");
    else
        printf("NO");
}
