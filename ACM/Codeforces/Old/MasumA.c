#include<stdio.h>
#include<string.h>
void f(char* a, char *b, int k);
int main(){
    int n,i,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        char a[101],b[101];
        scanf("%s %s",a,b);
        f(a,b,k);
    }
}
void f(char* a, char *b, int k){
    int f=0;
    ///
    int h,i,j,la=strlen(a),lb=strlen(b);
    char x[k+1];for(i=0;i<k+1;i++)x[i]=0;
    for(i=0;i<la-k;i++){
        for(j=0;j<k;j++){
            x[j]=a[i+j];
        }x[j]=0;
        for(h=0;h<lb-k;h++){
            for(j=0;j<k;j++){
                if(x[j]!=b[h+j]){
                    f=0;
                    break;
                }
                else
                    f=1;
            }
            if(f==1)
                break;
        }
    }
    ///
    if(f==1)
        printf("YES\n");
    else
        printf("NO\n");
}
