#include<stdio.h>
unsigned long long int allcheck(unsigned long long int n);
unsigned long long int process(unsigned long long int n);
unsigned long long int inv(unsigned long long int n);
int pal(unsigned long long int a);
int num(int *p,unsigned long long int a,int i);
unsigned long long int pw(int b,int p);
int c=0;
int main(){
    int i,n;
    unsigned long long int pal;
    scanf("%d",&n);
    unsigned long long int set[n];
    for(i=0;i<n;i++)
        scanf("%llu",&set[i]);
    for(i=0;i<n;i++){
        c=0;
        pal=allcheck(set[i]);
        printf("%d %llu\n",c,pal);
    }
}
unsigned long long int allcheck(unsigned long long int n){
    int f;
    f=pal(n);
    if(f==1)
        return n;
    else{
        c++;
        n=process(n);
        n=allcheck(n);
        return n;
    }
}
unsigned long long int process(unsigned long long int n){
    unsigned long long int u;
    u=inv(n);
    return u+n;
}
unsigned long long int inv(unsigned long long int n){
    int d[10],l,i=0;
    l=num(d,n,0);
    for(i=l-1,n=0;i>=0;i--){
        n=n+(d[i]*pw(10,l-1-i));
    }
    return n;
}
int pal(unsigned long long int a){
    int d[10],l,i;
    l=num(d,a,0);
    for(i=0,l--;i<l;i++,l--){
        if(d[i]!=d[l])
            return 0;
    }
    return 1;
}
int num(int *p,unsigned long long int a,int i){
    if(a==0)
        return i;
    unsigned long long int r;
    p[i]=a%10;
    i++;
    r=a/10;
    num(p,r,i);
}
unsigned long long int pw(int b,int p){
    int i=1;
    unsigned long long int a=1;
    for(i=1;i<=p;i++){
        a=a*b;
    }
    return a;
}
