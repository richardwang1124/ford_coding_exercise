#include <stdlib.h>
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int manhattan_distance(Point a, Point b) {
    return abs(a.x - b.x) + abs(a.y - b.y); 
}

int main() {
    Point a = {5, 4};
    Point b = {3, 2};
    Point c = {-1, 2};
    Point d = {1, -2};
    cout << manhattan_distance(a, b) << endl;
    cout << manhattan_distance(c, d) << endl;
}