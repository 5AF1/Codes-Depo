#include<stdio.h>
#include<string.h>
void shift(char *a,int l);
int main(){
    char a[101];
    gets(a);
    int i,l=strlen(a),f=1;
    for(i=1;i<l;i++){
        if(a[i]>=97)
            f=0;
    }
    if(f==0)
        puts(a);
    else{
        shift(a,l);
        puts(a);
    }
}
void shift(char *a,int l){
    int i;
    for(i=0;i<l;i++){
        if(a[i]>=97)
            a[i]-=32;
        else
            a[i]+=32;
    }
    return;
}
