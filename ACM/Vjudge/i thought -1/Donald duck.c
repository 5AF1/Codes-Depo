#include<stdio.h>
int move(int p,char c);
int nextpos(char c);
int main(){
    int n,i=0,p=0,m=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        char name[8];
        gets(name);
        m=m+move(p,name[0]);
        p=nextpos(name[0]);
    }
    printf("%d",m);
}
int nextpos(char c){
    if(c=='A' || c=='P' || c=='O' || c=='R')
        return 0;
    else if(c=='B' || c=='M' || c=='S')
        return 1;
    else if(c=='D' || c=='G' || c=='J' || c=='K' || c=='T' || c=='W')
        return 2;
}
int move(int p,char c){
    int m,a;
    a=nextpos(c);
    m=p-a;
    if(m<0)
        m=m*(-1);
    return m;
}
