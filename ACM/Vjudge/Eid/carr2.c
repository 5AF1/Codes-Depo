#include<string.h>
#include<stdio.h>
int main(){
    char a[11],b[11];
    while(1){
        int l_a,l_b,i,c,l;
        scanf("%s %s",a,b);
        l_a=strlen(a);
        l_b=strlen(b);
        if(a[0]=='0'&&l_a==1&&l_b==1&&b[0]=='0')
            break;
        for(i=0;i<l_a;i++)
            a[i]-=48;
        for(i=0;i<l_b;i++)
            b[i]-=48;
        l=((l_a<l_b) ? l_a:l_b);
        for(i=l,c=0;i>=0;i--){
            if(a[i]+b[i]>9)
                c++;
        }
        if(c==0)
            printf("No carry operation.\n");
        else
            printf("%d carry operation.\n",c);
    }
}
