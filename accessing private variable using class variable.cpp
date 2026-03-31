#include<iostream>
using namespace std;

class Base
{
protected:
    int x;
};

class Derived : public Base
{
public:
    void setData(int a)
    {
        x = 2;   // assign value properly
    }

    void display()
    {
        cout<<"Value of x = "<<x<<endl;   // directly access (protected)
    }
};

int main()
{
    Derived d1;

    d1.setData(50);
    d1.display();

    return 0;
}
