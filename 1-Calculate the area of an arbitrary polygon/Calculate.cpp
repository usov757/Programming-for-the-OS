#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

double area(const vector<Point>& v) {
    int n = v.size();
    double sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += v[i].x * v[i+1].y - v[i+1].x * v[i].y;
    }
    return 0.5 * sum;
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<Point> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the coordinates of the vertex " << i+1 << ":" << endl;
        cin >> v[i].x >> v[i].y;
    }
    double a = abs(area(v));
    cout << "The area of the polygon is: " << a << endl;
    return 0;
}
