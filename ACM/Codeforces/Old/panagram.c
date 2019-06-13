#include<stdio.h>
int main(){
    int n,i,f,j;
    scanf("%d",&n);
    getchar();
    char word[n+1],ch;
    gets(word);
    for(i=0;i<26;i++){
        ch=65+i;
        for(j=0,f=0;j<n;j++){
            if(ch==word[j] || ch+32==word[j]){
               f=1;
               break;
            }
        }
        if(f==0)
            break;
    }
    if(f==1)
        printf("YES");
    else
        printf("NO");
}
