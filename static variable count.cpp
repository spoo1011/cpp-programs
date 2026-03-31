//cpp pogram to implement static variable count and display results after implementing for 3 objects
#include<iostream>
using namespace std;

class demo
{
    static int count;
public:
    void getCount()
    {
        cout<<"count = "<<++count;
    }
};
int demo::count;

int main()
{
    demo d1,d2,d3;
    d1.getCount();
    d2.getCount();
    d3.getCount();
    return 0;
}
//what are the different usable operator overloading?(theory))
