#include<stdio.h>
int main(){
    int n,i,a;
    scanf("%d",&n);
    int l[n];
    for(i=0;i<n;i++){
        scanf("%d",&a);
        l[a-1]=i+1;
    }
    for(i=0;i<n;i++){
        printf("%d ",l[i]);
    }
}
