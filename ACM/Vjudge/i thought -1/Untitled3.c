#include<stdio.h>
unsigned long long int pw(int b,int p);
unsigned long long int inv(unsigned long long int n){
    int d[10],l,i=0;
    l=num(d,n,0);
//    for(i=l-1;i>=0;i--)
//        printf("%d ",d[i]);
    for(i=l-1,n=0;i>=0;i--){
        //printf("%llu\n",pw(10,i));
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
    //printf("%llu  ",a);
    return a;
}
int main(){
    unsigned long long int a=5156525;
    int f,d[10],i=0,l;
//    l=num(d,a,i);
//    printf("%d ",l);
//    for(i=0;i<l;i++)
//        printf("%d",d[i]);
    a=inv(a);
    printf("   %llu",a);
}
