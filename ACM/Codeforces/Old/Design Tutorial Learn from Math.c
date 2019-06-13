#include<stdio.h>
int main(){
    int n,m,i,j,f=1;
    scanf("%d",&n);
    for(i=4;i<n;i+=2){
        f=1;
        m=n-i;
        for(j=2;j<(m/2);j++){
            if(m%j==0){
                f=0;
            }
        }
        if(f==0)
        break;
    }
    printf("%d %d",i,m);
}
