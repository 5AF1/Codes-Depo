#include<stdio.h>
int main(){
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s%2==0){
        for(i=0;i<n;i++){
            c+=a[i];
            if(c>=(s/2))
                break;
        }
    }
    else{
        for(i=0;i<n;i++){
            c+=a[i];
            if(c>=(s/2)+1)
                break;
        }
    }
    printf("%d",i+1);
}
