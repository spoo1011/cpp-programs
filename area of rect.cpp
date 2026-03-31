//create a class student with data members length and width. create an object to display area of rectangle using a member function
#include<iostream>
using namespace std;

class rectangle
{
   public:
    float l,w;

   void area()
   {   float area;
       area = l*w;
       cout<<"Area of rectangle ="<<area<<endl;
   }
};

int main()
{
    rectangle r1;
    cout<<"Enter length and width: ";
    cin>>r1.l>>r1.w;
    r1.area();
    return 0;
}

/*using scope resolution

class rect
{private:
int l,w;
public:
void setData(int l, int w);
int area();
};

void rect::setData(int l, int w) function declaration
{ length =l;
width=w;

