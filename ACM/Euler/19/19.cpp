#include<bits/stdc++.h>

using namespace std;

class calender{
private:
    int year,month,date,day;
    void print_month(int m){
        if(m==1)
            cout<<"Jan";
        else if(m==2)
            cout<<"Feb";
        else if(m==3)
            cout<<"Mar";
        else if(m==4)
            cout<<"Apr";
        else if(m==5)
            cout<<"May";
        else if(m==6)
            cout<<"Jun";
        else if(m==7)
            cout<<"Jul";
        else if(m==8)
            cout<<"Aug";
        else if(m==9)
            cout<<"Sep";
        else if(m==10)
            cout<<"Oct";
        else if(m==11)
            cout<<"Nov";
        else if(m==12)
            cout<<"Dec";
    }
    void print_day(int dy){
        if(dy==0)
            cout<<"Mon";
        else if(dy=1)
            cout<<"Tue";
        else if(dy=2)
            cout<<"Wed";
        else if(dy=3)
            cout<<"Thu";
        else if(dy=4)
            cout<<"Fri";
        else if(dy=5)
            cout<<"Sat";
        else if(dy=6)
            cout<<"Sun";
    }
public:
    calender(int y,int m, int dt, int dy){
        year=y;
        month=m;
        date=dt;
        day=dy;
    }
    void print(){
        cout<<date<<'-'<<month<<'-'<<year<<'\n';
        print_day(day);print_month(month);cout<<endl;
    }
    void next_day(){
        day++;day%=7;
        if(date==28 && month==2 && (year%4==0 && year%100!=0 || year%400==0)){
            date=1;month++;
        }
        else if(date==29 && month==2 || date==31){
            date=1;month%=12;month++;
        }
        //else if()
    }
};
int weekday(int d,int m, int y){
    int a=(y%100);

    a/=4;

    a+=d;

    if(m==1 || m==10)
        a+=1;
    else if(m==5)
        a+=2;
    else if(m==8)
        a+=3;
    else if(m==2 ||m==3 ||m==11)
        a+=4;
    else if(m==6)
        a+=5;
    else if(m==9 || m==12)
        a+=6;

    if((m==1||m==2)&&(y%400==0 || y%4==0 && y%100!=0))
        a--;

    if((y/100)%4==0)
        a+=6;
    else if((y/100)%4==1)
        a+=4;
    else if((y/100)%4==2)
        a+=2;

    a+=y%100;

    a%=7;

    return a;
}
int main(){
    int c=0;
    for(int y=1901;y<=2000;y++){
        for(int m=1;m<=12;m++){
            int d=weekday(1,m,y);
            if(d==1){
                c++;
                cout<<1<<" "<<m<<' '<<y<<'\n';
            }
        }
    }
    cout<<c;
}
