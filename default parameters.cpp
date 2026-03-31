#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
    // Simple constructor with default parameters
    Rectangle(float l = 5, float b = 4) {
        length = l;
        breadth = b;
    }

    void show() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r;// object declaration
    float l, b;
    char choice;

    cout << "Use default values (y/n): ";
    cin >> choice;

    if (choice == 'n') {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        Rectangle r(l, b);
        r.show();
    } else {
        Rectangle r;       // Default object (5, 4)
        r.show();
    }

    return 0;
}
