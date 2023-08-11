#include <iostream>
#include <string>
using namespace std;

int main()
{
    // type variableName = value;
    // int double char string bool
    int number = 5;
    double decimal = 10.10;
    char character = 'D';
    string sentence = "this is an string.";
    bool boolean = true;

    number = 50;
    cout << number << " is number" << endl;

    int x, y, z;
    x = y = z = 50;
    cout << x + y + z;

    // this won't change
    const double PI = 3.14;

    int xx, yy;
    int sum;
    cout << endl
         << "Type a number: ";
    cin >> xx;
    cout << "Type another number: ";
    cin >> yy;
    sum = xx + yy;
    cout << "Sum is " << sum;

    // boolean 1 byte
    // char 1 byte
    // int 2 byte or 4 byte
    // float 4 bytes
    // double 8 bytes

    float flt = 15.99;
    double dbl = 9.57;

    // float vs double -> float takes only 6 or 7 decimal values while double takes upto 15

    float f1 = 35e3;
    double d1 = 12E4;

    // assign ascii to char
    char a = 65;
    char b = 66;
    char c = 67;

    string greeting = "Hello";
    cout << greeting;

    return 0;
}