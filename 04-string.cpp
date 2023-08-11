#include <iostream>
#include <string>
using namespace std;

int main()
{
    string greeting = "hello";

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;

    string apd = firstName.append(lastName);

    cout << apd.length();
    // alias of length
    cout << apd.size();

    cout << endl << apd[0];
    apd[0] = "D"

    string spcl = "This is \"Very Sepcial\" string".

    cin >> firstName;
    cin >> lastName;

    cout << endl << "your name is: " << firstName + lastName;
    // cin takes whitespace tabs etc as terminator so it takes first word only.
    // to fix that
    getline(cin, fullName);

    return 0;
}