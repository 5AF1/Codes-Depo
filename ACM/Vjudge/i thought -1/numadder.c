#include<stdio.h>
#include<string.h>
int num(int *p,int a,int i);
int numadder(int *a,int l);
int main(){
    int i,l,n,d[5];
    char number[11];
    number[0]='1';
    while(number[0]!='0'){
        gets(number);
        l=strlen(number);
        for(i=0,n=0;i<l;i++){
            n=n+number[i]-48;
        }
        l=num(d,n,0);
        if(l>1){
            n=numadder(d,l);
        }
        if(n!=0)
            printf("%d\n",n);
    }
}
int num(int *p,int a,int i){
    if(a==0)
        return i;
    unsigned long long int r;
    p[i]=a%10;
    i++;
    r=a/10;
    num(p,r,i);
}
int numadder(int *a,int l){
    int n=0;
    if(l==1)
        return a[0];
    else{
        int i;
        for(i=0;i<l;i++){
            n+=a[i];
        }
        l=num(a,n,0);
        n=numadder(a,l);
    }
    return n;
}
