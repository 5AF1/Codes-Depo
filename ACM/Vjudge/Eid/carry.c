#include<stdio.h>
#include<string.h>
int main(){
    char a[11],b[11];
    while(1){
        scanf("%s %s",a,b);
        int c=0,l_a,l_b,l,i;
        char carr=0,t;
        l_a=strlen(a);
        l_b=strlen(b);
        if(a[0]=='0'&&l_a==1&&l_b==1&&b[0]=='0')
            break;
        for(i=0;i<l_a;i++)
            a[i]-=48;
         for(i=0;i<l_b;i++)
            b[i]-=48;
        l=((l_a<l_b) ? l_a:l_b);
        for(i=l;i>=0;i--){
            t=a[i]+b[i]+carr;
            if(t>9){
                c++;
                carr=1;
            }
            else
                carr=0;
        }
        if(c==0)
            printf("No carry operation.\n");
        else
            printf("%d carry operation.\n",c);
    }
    return 0;
}
