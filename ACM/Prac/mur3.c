#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int p[n];
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        printf("%d\n",p[i]+1);
}
