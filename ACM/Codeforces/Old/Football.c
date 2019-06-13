#include<stdio.h>
#include<string.h>
int main(){
    char str[101]={};
    char a;
    int i,n=1,fl=0;
    gets(str);
    a=str[0];
    for(i=0;i<strlen(str);i++){
        if(n>=7){
            fl=1;
            break;
        }
        if(a==str[i+1])
            n++;
        else{
            a=str[i+1];
            n=1;
        }
    }
    if(fl==0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
