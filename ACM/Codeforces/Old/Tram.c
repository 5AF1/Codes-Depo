#include<stdio.h>
int main(){
    int n,p=0,i,o,m=0,j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d %d",&o,&i);
        p=p+i-o;
        if(m<p)
            m=p;
    }
    printf("%d",m);
}
