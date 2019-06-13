#include<stdio.h>
#include<string.h>
int f1(char *p,int l);
int f2(char *p,int l);
int main(){
    int n,i,l;
    char a[1001];
    scanf("%d",&n);
    getchar();
    int r[n];
    for(i=0;i<n;i++)
        r[i]=0;
    for(i=0;i<n;i++){
        int x,y;
        gets(a);
        l=strlen(a);
        x=f1(a,l);
        y=f2(a,l);
        if(x&&y)
            r[i]=1;
    }
    for(i=0;i<n;i++){
        //printf("%d %d\n",r[i],i);
        if(r[i]==1 && i==n-1)
            printf("yes");
        else if(r[i]==0 && i==n-1)
            printf("no");
        else if(r[i]==1)
            printf("yes\n");
        else if(r[i]==0)
            printf("no\n");
    }
}
int f1(char *p,int l){
    int i=0,j=l-1,f=1;
    for(i=0;i<j;i++,j--){
        if(p[i]!=p[j]){
            f=0;
            //printf("1");
            break;
        }
    }
    return f;
}
int f2(char *a,int l){
    int i=0,f=1;
    for(i=0;i<l;i++){
        if(a[i]!='W'&&a[i]!='T'&&a[i]!='Y'&&a[i]!='U'&&a[i]!='I'&&a[i]!='O'&&a[i]!='A'&&a[i]!='H'&&a[i]!='V'&&a[i]!='M'&&a[i]!='X'){
            f=0;
            //printf("2 %c",a[i]);
            break;
        }
    }
    return f;
}
