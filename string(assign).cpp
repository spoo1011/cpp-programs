#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;

    str.assign("Hello, World!");// assiging a c-style string
    cout<<str<<endl;

    str.assign("Hello, Universe!",7,8);//substring assignment
    cout<<str<<endl;

    string other="c++ Programming";//assigning part of another string
    str.assign (other,4,11);
    cout<<str<<endl;
    return 0;
}
