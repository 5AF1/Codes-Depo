#include<stdio.h>
#include<string.h>
int main(){
    int i,a,h,n;
    char line[101];
    gets(line);
    n=strlen(line);
    //printf("%s %d",line,a);
    for(i=2;i<n;i+=2){
        for(a=line[i],h=i;h>0&&line[h-2]>a;h-=2)
            line[h]=line[h-2];
        line[h]=a;
    }
    printf("%s",line);
}
