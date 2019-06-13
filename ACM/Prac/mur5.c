#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[i],b[i],c[i],d[i];
    for(i=0;i<n;i++)
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
    for(i=0;i<n;i++){
        if(a[i]==b[i] && c[i]==d[i])
            printf("YES\n");
        else if(a[i]==c[i] && b[i]==d[i])
            printf("YES\n");
        else if(a[i]==d[i] && c[i]==b[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
