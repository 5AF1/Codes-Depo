#include<string.h>
#include<stdio.h>
int main(){
    int i,n;
    scanf("%d\n",&n);
    char word[101][101]={};
    int num[n];
    char fir[n],las[n];
    for(i=0;i<n;i++){
       // printf(" %d \n",i);
        gets( word[i]);
        num[i]=strlen(word[i])-2;
        fir[i]=word[i][0];
        las[i]=word[i][strlen(word[i])-1];
    }
    for(i=0;i<n;i++){
        if(strlen(word[i])>10)
            printf("%d%c%d%c\n",i,fir[i],num[i],las[i]);
        else
            printf("%d%s\n",i,word[i]);
    }
    return 0;
}
