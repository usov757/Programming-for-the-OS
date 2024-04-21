#include <iostream>

using namespace std;

int free_seats(int n) {
    return (50 - ((n) % 50));
}

int main() {
    int passengers;
    cout << "Enter the number of passengers: ";
    cin >> passengers;
    int freeS = free_seats(passengers);
    cout << "The last bus will have " << freeS << " free seats." << endl;
    return 0;
}
