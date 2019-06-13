#include<stdio.h>
#include<string.h>
int main(){
    char set[1001],a;
    int l,c=0,i,j;
    gets(set);
    l=strlen(set);
    for(i=1;i<l;i+=3){
        if(set[i]=='0')
            continue;
        else{
            c++;
            a=set[i];
            for(j=1;j<l;j+=3){
                if(a==set[j])
                    set[j]='0';
            }
        }
    }
    if(l==2)
        printf("%d",c-1);
    else
        printf("%d",c);
}
