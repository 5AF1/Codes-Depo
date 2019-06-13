#include<stdio.h>
int main(){
    long int s_1=0,s_2=0,s_3=0,i,c=0;
    long int n;
    scanf("%ld",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    ///
    for(i=0;i<n;i++){
        ///
        if(arr[i]==4)
            c++;
        ///
        else if(arr[i]==3 && s_3<1){
            c++;
            s_1++;
        }
        else if(arr[i]==3 && s_3>=1){
            s_3--;
            s_2--;
            s_1-=3;
        }
        ///
        else if(arr[i]==2 && s_2<1){
            c++;
            s_2++;
            s_1+=2;
        }
        else if(arr[i]==2 && s_2>=1){
            s_2--;
            s_1=s_1-2;
        }
        ///
        else if(arr[i]==1 && s_1<1){
            c++;
            s_3++;
            s_2++;
            s_1=s_1+3;
        }
        else if(arr[i]==1 && s_1>=1){
            if(s_3>=1 && s_1>=3){
                s_3--;
            }
            if(s_2>=1 && s_1>=2){
                s_2--;
            }
            s_1--;
        }
        ///
   }
   printf("%d",c);
}
