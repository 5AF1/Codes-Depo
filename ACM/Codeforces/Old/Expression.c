#include<stdio.h>
int main(){
    int a,b,c,s[6],i,x=0;
    scanf("%d%d%d",&a,&b,&c);
    s[0]=a+b+c;
    s[1]=a*b+c;
    s[2]=a+b*c;
    s[3]=a*b*c;
    s[4]=a*(b+c);
    s[5]=(a+b)*c;
    for(i=0;i<6;i++){
        if(s[i]>x)
            x=s[i];
    }
    printf("%d",x);
}
