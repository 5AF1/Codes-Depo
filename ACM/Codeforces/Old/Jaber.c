#include<stdio.h>
#include<string.h>
int main(){
    int n,c=0,i;
    scanf("%d",&n);
    char w[n+1];
    getchar();
    gets(w);
    if(n<6){
        printf("%d",6-n);
    }
    else{
        c++;
    for(i=0;i<n;i++){
        if(w[i]>=97 && w[i]<=122){
            c++;
            //printf("*");
            break;
        }
    }
    for(i=0;i<n;i++){
        if(w[i]>=65 && w[i]<=90){
            //printf("*");
            c++;
            break;
        }
    }
     for(i=0;i<n;i++){
        if(w[i]>=48 && w[i]<=57){
            //printf("*");
            c++;
            break;
        }
    }
     for(i=0;i<n;i++){
        if(w[i]>=33 && w[i]<=47 || w[i]>=58 && w[i]<=64 || w[i]>=91 && w[i]<=96 || w[i]>=123 && w[i]<=126){
            c++;
            //printf("*");
            break;
        }
    }
    printf("%d",5-c);
    }
}
