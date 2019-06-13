#include<stdio.h>
int con(int n);
int trans(int n,int m);
void seat(char *p,int n);
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        char s[3];
        b[i]=con(a[i]);
        a[i]=trans(b[i],a[i]);
        b[i]=trans(b[i],b[i]);
        seat(s,b[i]);
        printf("%d%s\n",a[i],s);
    }
}
int con(int n){
    return (1+(n-1)%8);
}
int trans(int n,int m){
    if(n==1)
        m=m+3;
    else if(n==2)
        m=m+3;
    else if(n==3)
        m=m+3;
    else if(n==4)
        m=m-3;
    else if(n==5)
        m=m-3;
    else if(n==6)
        m=m-3;
    else if(n==7)
        m=m+1;
    else if(n==8)
        m=m-1;
    return m;
}
void seat(char *p,int n){
    if(n==1 || n==4){
        p[0]='L';
        p[1]='B';
        p[2]='\0';
    }
    else if(n==2 || n==5){
        p[0]='M';
        p[1]='B';
        p[2]='\0';
    }
    else if(n==3 || n==6){
        p[0]='U';
        p[1]='B';
        p[2]='\0';
    }
    else if(n==7){
        p[0]='S';
        p[1]='L';
        p[2]='\0';
    }
    else if(n==8){
        p[0]='S';
        p[1]='U';
        p[2]='\0';
    }
}
