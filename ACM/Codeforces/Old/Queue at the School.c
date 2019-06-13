#include<stdio.h>
#include<string.h>
int main(){
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    getchar();
    char li[n+1];
    gets(li);
    for(i=0;i<t;i++){
        for(j=0;j<n;j++){
            if(li[j]=='B' && li[j+1]=='G'){
                li[j]='G';
                li[j+1]='B';
                j++;
            }
        }
    }
    printf(li);
}
