#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    //Before swapping

    a = a;
    b = b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    // After swapping
    c = a;
    a = b;
    b = c;

    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
