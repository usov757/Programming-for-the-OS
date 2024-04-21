#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 5;
    double cost = 10;

    int ages[n];
    cout << "Enter the ages of the " << n << " people: "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> ages[i];
    }

    sort(ages, ages + n);

    cout << "Sorted ages: ";
    for (int i = 0; i < n; i++) {
        cout << ages[i] << " ";
    }
    cout << endl;

    double min_year =  ages[0] ;
    cout << "The discount was: " << (cost * n * (min_year/100)) << endl;
    double total_cost = (cost * n) - ((cost * n) * (min_year/100));

    cout << "The total cost of tickets is: $" << total_cost << endl;

    return 0;
}
