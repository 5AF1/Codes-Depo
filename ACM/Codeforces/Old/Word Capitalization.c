#include<stdio.h>
int main(){
    char w[1001];
    gets(w);
    if(w[0]>=97)
        w[0]=w[0]-32;
    printf("%s",w);
    return 0;
}
