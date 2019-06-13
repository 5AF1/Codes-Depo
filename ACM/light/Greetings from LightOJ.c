#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int w[n][2];
    for(i=0;i<n;i++)
        scanf("%d %d",&w[i][0],&w[i][1]);
    for(i=0;i<n;i++)
        printf("Case %d: %d\n",i+1,(w[i][0]+w[i][1]));
}
