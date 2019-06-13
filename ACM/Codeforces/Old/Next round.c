#include<stdio.h>
int main(){
    int n,k,i,a=0;
    scanf("%d %d",&n,&k);
    int con[n];
    for(i=0;i<n;i++){
        scanf("%d",&con[i]);
    }
   for(i=0;i<n;i++){
        if(con[i]>=con[k-1] && con[i]!=0)
            a++;
    }
    printf("%d",a);
    return 0;
}
