// cpp program to pass object as an function argument and add 2 numbers and write the member functions as non-inline
#include<iostream>
using namespace std;

class Time
{
    int hour, minute, sec;

public:
    void getTime();
    void printTime();
    void addTime(Time x, Time y);
};

// Non-inline function definitions

void Time::getTime()
{
    cout<<"\nEnter hours:";
    cin>>hour;

    cout<<"\nEnter minutes:";
    cin>>minute;

    cout<<"\nEnter seconds:";
    cin>>sec;
}

void Time::printTime()
{
    cout<<"\nhour:"<<hour;
    cout<<"\tminute:"<<minute;
    cout<<"\tsecond:"<<sec;
}

void Time::addTime(Time x, Time y)
{
    hour = x.hour + y.hour;
    minute = x.minute + y.minute;
    sec = x.sec + y.sec;
}

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
