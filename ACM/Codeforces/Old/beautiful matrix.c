#include<stdio.h>
int main(){
    int mat[5][5];
    int i,j,c,m,n;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1){
                m=i;
                n=j;
            }
        }
    }
    if(m>2)
        m=m-2;
    else
        m=2-m;
    if(n>2)
        n=n-2;
    else
        n=2-n;
    c=m+n;
    printf("%d",c);
}
