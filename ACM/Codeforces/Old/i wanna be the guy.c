#include<stdio.h>
int main(){
    int n,i,f,a,t;
    scanf("%d",&n);
    int bin[n];
    for(i=0;i<n;i++){
        bin[i]=0;
    }
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&t);
        if(bin[t-1]==0)
            bin[t-1]=1;
    }
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&t);
        if(bin[t-1]==0)
            bin[t-1]=1;
    }
    f=1;
    for(i=0;i<n;i++){
        if(bin[i]==0){
            f=0;
            break;
        }
    }
    if(f==1)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}
