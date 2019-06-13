#include<stdio.h>
int main(){
    int n,i,X=0,Y=0,Z=0;
    scanf("%d",&n);
    int x[n],y[n],z[n];
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        X+=x[i];
        Y+=y[i];
        Z+=z[i];
    }
    if(X==0 && Y==0 && Z==0)
        printf("YES");
    else
        printf("NO");
}
