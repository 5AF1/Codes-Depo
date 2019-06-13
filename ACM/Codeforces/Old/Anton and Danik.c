#include<stdio.h>
#include<string.h>
int main(){
    int n,a=0,b=0,l,i;
    scanf("%d %d",&n,&i);
    getchar();
    char set[n+1];
    gets(set);
    l=strlen(set);
    for(i=0;i<l;i++){
        if(set[i]=='A')
            a++;
        if(set[i]=='D')
            b++;
    }
    if(a>b)
        printf("Anton");
    else if(b>a)
        printf("Danik");
    else
        printf("Friendship");
}
