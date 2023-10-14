#include<iostream>
using namespace std;
struct Date{
    int day,month,year;
    string getDate(){
        return to_string(day)+"/"+
                to_string(month)+"/"+
                to_string(year);
    }
    void showDate(){
        cout<<getDate()<<endl;
    }
};

struct Time{
    int hour,minute;
    string getTime(){
        return to_string(hour)+":"+
                to_string(minute);
    }
    void showTime(){
        cout<<getTime()<<endl;
    }
};

struct Appointment{
    Date date;
    Time time;
    string location;

    void show(){
        cout<<"Appointment Date : "<<date.getDate()<<endl;
        cout<<"Appointment Time : "<<time.getTime()<<endl;
        cout<<"Appointment Location : "<<location<<endl;
    }
};


int main(){
    Date date = {15,2,2023};
    Time time = {5,15};
    Appointment app[2];
    app[0] = {date,time,"Evercare"};
    app[1] = {{15,2,2023},{6,0},"D` Akbers"};

    for(int i=0;i<2;i++){
        if( app[i].time.hour <= 5 &&
           app[i].time.minute <= 30 ){
            app[i].show();
        }
    }

    return 0;
}
