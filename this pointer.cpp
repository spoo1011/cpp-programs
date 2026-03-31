// cpp program to pass object as an function argument and add 2 numbers using this pointer
#include<iostream>
using namespace std;

class Time
{
    int hour, minute, sec;

public:
    void getTime()
    {
        cout<<"\nEnter hours:";
        cin>>this->hour;

        cout<<"\nEnter minutes:";
        cin>>this->minute;

        cout<<"\nEnter seconds:";
        cin>>this->sec;
    }

    void printTime()
    {
        cout<<"\nhour:"<<this->hour;
        cout<<"\tminute:"<<this->minute;
        cout<<"\tsecond:"<<this->sec;
    }

    void addTime(Time x, Time y)
    {
        this->hour = x.hour + y.hour;
        this->minute = x.minute + y.minute;
        this->sec = x.sec + y.sec;
    }
};

int main()
{
    Time t1, t2, t3;

    cout<<"Enter Time 1:";
    t1.getTime();

    cout<<"\nEnter Time 2:";
    t2.getTime();

    t3.addTime(t1, t2);

    cout<<"\nAdded Time:";
    t3.printTime();

    return 0;
}
