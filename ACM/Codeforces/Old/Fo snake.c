#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    char s[n][m];
    ///
    for(i=0;i<n;i+=2){
        for(j=0;j<m;j++)
            s[i][j]='#';
    }
    ///
    for(i=1;i<n;i+=4){
        s[i][m-1]='#';
        for(j=0;j<m-1;j++){
            s[i][j]='.';
        }
    }
    ///
    for(i=3;i<n;i+=4){
        s[i][0]='#';
        for(j=1;j<m;j++)
            s[i][j]='.';
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c",s[i][j]);
        }
        printf("\n");
    }
}
