#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

bool can_queen_move(char x1, int y1, char x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    // Check for horizontal or vertical move
    if (dx == 0 || dy == 0) {
        return true;
    }

    // Check for diagonal move
    if (dx == dy) {
        return true;
    }

    return false;
}

int main() {
    char x1, x2;
    int y1, y2;

    cout << "Enter the starting position (x1, y1) of the queen (e.g. a1): ";
    cin >> x1 >> y1;
    x1 = toupper(x1) - 'A' + 1;

    cout << "Enter the ending position (x2, y2) of the queen (e.g. h8): ";
    cin >> x2 >> y2;
    x2 = toupper(x2) - 'A' + 1;

    if (can_queen_move(x1, y1, x2, y2)) {
        cout << "Yes" << std::endl;
    } else {
        cout << "No" << std::endl;
    }

    return 0;
}
