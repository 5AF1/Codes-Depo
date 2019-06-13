#include<stdio.h>
int main(){
    int a,s,d,q,w,e;
    scanf("%d %d %d",&a,&s,&d);
    scanf("%d %d %d",&q,&w,&e);
    if(a>q){
        a=1;
        q=0;
    }
    else if(q>a){
        a=0;
        q=1;
    }
    else{
        a=0;
        q=0;
    }
    if(s>w)
        a++;
    else if(w>s)
        q++;
    if(d>e)
        a++;
    else if(e>d)
        q++;
    printf("%d %d",a,q);
}
