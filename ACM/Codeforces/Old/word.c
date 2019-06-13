#include<stdio.h>
#include<string.h>
int main(){
    int i,l,c=0;
    char a[101];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]<97)
            c++;
    }
    if(c>l/2){
        for(i=0;i<l;i++){
            if(a[i]>=97)
                a[i]-=32;
        }
    }
    else{
        for(i=0;i<l;i++){
            if(a[i]<97)
                a[i]+=32;
        }
    }
    printf(a);
}
