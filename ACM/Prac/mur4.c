#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    for(i=0;i<n;i++){
        if(a[i]==0 || b[i]==0 || c[i]==0)
            printf("NO\n");
        else if((a[i]+b[i]+c[i])!=180)
            printf("NO\n");
        else if((a[i]+b[i]+c[i])==180)
            printf("YES\n");
    }
    return 0;
}
