#include<stdio.h>
#include<string.h>
void insertion(char arr[],int l);
int main(){
    int l,i,f=1;
    char a[100],b[100],c[100];
    gets(a);
    gets(b);
    gets(c);
    if(strlen(a)+strlen(b)!=strlen(c))
        printf("NO");
    else{
        strcat(a,b);
        l=strlen(c);
        insertion(a,l);
        insertion(c,l);
        if(strcmp(a,c)==0)
            printf("YES");
        else
            printf("NO");
    }
//    for(i=0;i<l;i++){
//        if(a[i]!=c[i]){
//            f=0;
//            break;
//        }
//    }
}
void insertion(char arr[],int l){
    int a,i,j,h,k;
    for(i=1;i<l;i++){
        for(a=arr[i],h=i;h>0&&arr[h-1]>a;h--){
            arr[h]=arr[h-1];
        }
        arr[h]=a;
    }
}
