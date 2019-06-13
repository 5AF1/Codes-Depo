#include<stdio.h>
int next_prime(int a);
int main(){
    int a;
    scanf("%d",&a);
    a=next_prime(a);
    printf("%d",a);
}
int next_prime(int a){
    if(a==1)
        return 2;
    else if(a==2)
        return 2;
    else if(a==3)
        return 3;
    else{
        if(a%2==0)
            a++;
        while(1){
            int f=1,i;
            for(i=3,f=1;i<a;i+=2){
                if(a%i==0){
                    f=0;
                    break;
                }
            }
            if(f==1)
                return a;
            else
                a+=2;
        }
    }
}
