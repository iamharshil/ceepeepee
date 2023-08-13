#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 5; ++i) {
        std::cout << i << std::endl;
    }

    int myNumbers[] = {10, 20, 30, 40, 50};
    for (int i: myNumbers) {
        if (i == 30) {
            // this will break the loop
            break;
        }
        cout << i << endl;
    }
    return 0;
}