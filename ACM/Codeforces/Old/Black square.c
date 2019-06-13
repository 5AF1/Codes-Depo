#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,d,l,cal=0,i;
    char s[100000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    getchar();
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='1')
            cal+=a;
        else if(s[i]=='2')
            cal+=b;
        else if(s[i]=='3')
            cal+=c;
        else if(s[i]=='4')
            cal+=d;
    }
    printf("%d",cal);
}
