#include<stdio.h>
int main(){
    long int n,i;
    scanf("%ld",&n);
    int s[n];
    for(i=0;i<n;i++){
        scanf("%ld",&s[i]);
        s[i]=((s[i])*((s[i]*s[i])-1)*(3*s[i]+2))/12;
    }
    for(i=0;i<n;i++){
        if(i==n-1)
            printf("%ld",s[i]);
        else
            printf("%ld\n",s[i]);
    }
}
