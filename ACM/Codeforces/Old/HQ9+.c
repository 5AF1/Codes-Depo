#include<stdio.h>
#include<string.h>
int main(){
    char li[101];
    int l,i,flag=0;
    gets(li);
    l=strlen(li);
    for(i=0;i<l;i++){
        if(li[i]==72||li[i]==81||li[i]==57)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("NO");
    else
        printf("YES");

}
