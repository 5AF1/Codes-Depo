#include<stdio.h>
int main(){
    long int n,t,i,p=0,d;
    int f=0;
    scanf("%ld %ld",&n,&t);
    for(i=0;i<n-1;i++){
        scanf("%ld",&d);
        p+=d;
        if(p==t)
            f=1;
    }
    if(f==1)
        printf("YES");
    else
        printf("NO");
}


