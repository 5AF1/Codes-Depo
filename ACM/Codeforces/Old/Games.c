#include<stdio.h>
int main(){
    int n,i,j,c;
    scanf("%d",&n);
    int t[n][2];
    for(i=0;i<n;i++)
        scanf("%d %d",&t[i][0],&t[i][1]);
    for(i=0,c=0;i<n;i++){
        for(j=0;j<n;j++){
            if(t[i][0]==t[j][1])
                c++;
        }
    }
    printf("%d",c);
}
