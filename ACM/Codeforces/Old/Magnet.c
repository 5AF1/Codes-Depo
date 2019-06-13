#include<stdio.h>
#include<string.h>
int main(){
    int n,i,c=1;
    char a[3],b[3];
    scanf("%d",&n);
    getchar();
    gets(a);
    for(i=0;i<n-1;i++){
        gets(b);
        if((strcmp(a,b))){
            strcpy(a,b);
            c++;
        }
    }
    printf("%d",c);
}
