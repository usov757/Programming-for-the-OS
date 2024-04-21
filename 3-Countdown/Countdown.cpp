#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        if (number % 5 == 0) {
            cout << "\n" << number << "\n" << "Beep";
            number--;
        }
        cout << "\n" << number;
        number--;
    }

    return 0;
}
