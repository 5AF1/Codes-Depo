#include<stdio.h>
char ab(char a);
int main(){
    int n,c=0,i;
    scanf("%d",&n);
    getchar();
    char g[n+1],w[n+1];
    gets(g);
    //getchar();
    //puts(g);
    gets(w);
    //puts(w);
    for(i=0;i<n;i++){
        //printf("%d+",ab(g[i]-w[i]));
        c+=ab(g[i]-w[i]);
    }
    printf("%d",c);/**/
}
char ab(char a){
    if(a<0)
        a=a*(-1);
    if(a>5)
        a=10-a;
    return a;
}
