#include<stdio.h>
int next_prime(int a);
int main(){
    int a=1,b=1;
    while(a!=0 && b!=0){
        scanf("%d %d",&a,&b);
        int x=a,y=1,z=1;
        while(x<=b){
            int d_1,d_2,f=0;
            x=next_prime(x);
            y=next_prime(x+1);
            z=next_prime(y+1);
            d_2=z-y;
            d_1=y-x;
            if(d_1==d_2 && z<=b){
                f=1;
                printf("%d %d %d",x,y,z);
                x=next_prime(z+1);
                d_1=x-z;
                while(d_2==d_1 && x<=b){
                    printf(" %d",x);
                    y=next_prime(x+1);
                    d_1=y-x;
                    x=y;
                }
            }
            else
                x++;
            if(f==1){
                printf("\n");
                f=0;
            }
        }
    }
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
            for(i=3,f=1;i<a/2;i+=2){
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
