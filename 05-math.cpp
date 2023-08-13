#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // this does not require library at all.
    cout << max(5, 10) << endl
         << min(5, 10) << endl;

    // this does
    cout << sqrt(64) << round(2.6) << log(2) << endl;
    // there are more of it.

    // boolean
    // true 1 or false 0
    int x = 10;
    int y = 9;
    cout << (x > y) << (x == 10) << (x == 15);

    int myAge = 25;
    int votingAge = 18;

    if (myAge > votingAge) {
        cout << "Old enough to vote!";
    } else if (myAge == votingAge) {
        cout << "You're almost there!";
    } else {
        cout << "Not enough to vote!";
    }

    string result = (myAge > votingAge) ? "Old enough to vote!": "Not enough to vote!";
    return 0;
}