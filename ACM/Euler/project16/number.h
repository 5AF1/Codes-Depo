#include<bits/stdc++.h>
#define ull unsigned long long

#define maxx 1041087

using namespace std;

class number{
private:
    int start_pos;
    bool sign;
    short *digits;
public:
    number(int a){
        digits=new short[maxx];
        for(int i=0;a>0;i++,a=a/10){
            digits[i]=a%10;
            start_pos=i;
        }
        //start_pos++;
        if(a>0) sign=true;
        else sign=false;

    }
    number(string a){
        int sp=0;
        digits=new short[maxx];
        if(a[0]=='-') {
            sign=false;
            sp++;
        }
        else if(a[0]=='+'){
            sign=true;
            sp++;
        }
        else sign=true;
        int len=a.length();
        for(int i=len-1,j=0;i>=sp;i--,j++){
            digits[j]=a[i]-48;
        }
        for(int i=0;a[i]=='0';i++)
            start_pos=len-1-i;
        start_pos--;

    }
    ~number(){
        delete digits;
    }
    int get_totdigit(){
        return start_pos;
    }
    void print(){
        for(int i=start_pos;i>=0;i--)
            cout<<digits[i];
        cout<<endl;
    }
    ull sum(){
        ull ans=0;
        for(int i=start_pos;i>=0;i--)
            ans+=digits[i];
        return ans;
    }
    void mult(int a){
        int i=0,carry=0,cart=0;
        while(i<=start_pos){
            cart=(int)((digits[i]*a+carry)/10);
            digits[i]=(digits[i]*a+carry)%10;
            carry=cart;
            i++;
        }
        while(carry!=0){
            start_pos++;
            digits[start_pos]=carry%10;
            carry=carry/10;
        }
    }
};
