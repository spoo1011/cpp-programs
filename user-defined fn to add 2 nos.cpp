//c++ program to add 2 numbers using user defined function
#include<iostream>
#include<string.h>
using namespace std;

int add()
{
    int a,b,sum;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    sum = a + b;
    return sum;
}

int main()
{
    int result;
    result = add();
    cout<<"Sum = "<<result;
    return 0;
}
