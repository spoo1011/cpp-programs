#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int m1, m2, m3;

    // Function to input data
    void getData()
    {
        cout<<"Enter Name: ";
        cin>>name;

        cout<<"Enter Roll Number: ";
        cin>>roll;

        cout<<"Enter marks of 3 subjects: ";
        cin>>m1>>m2>>m3;
    }

    // Function to display data
    void display()
    {
        cout<<"\nStudent Details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Marks: "<<m1<<" "<<m2<<" "<<m3<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    Student s[n];   // array of objects

    // Input
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter details for student "<<i+1<<endl;
        s[i].getData();
    }

    // Output
    for(int i=0; i<n; i++)
    {
        s[i].display();
    }

    return 0;
}
