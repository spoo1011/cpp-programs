//create a class student with data members id,name,and marks. create an object and display the student details using a member function
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
