#include<iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }

    int getData()
    {
        return x;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout<<"Value of x = "<<getData()<<endl;
    }
};

int main()
{
    Derived d1;

    d1.setData(50);   // setting value using setter
    d1.display();     // accessing via getter

    return 0;
}
