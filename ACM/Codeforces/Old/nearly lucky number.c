#include<stdio.h>
#include<string.h>
int main(){
    char num[20];
    int c=0,i,n;
    gets(num);
    ///
    n=strlen(num);
    for(i=0;i<n;i++){
        if(num[i]==52 || num[i]==55)
            c++;
    }
    if(c==4 || c==7)
        printf("YES");
    else
        printf("NO");
}
