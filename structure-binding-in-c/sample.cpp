// Structure binding in C++17
#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
int main(){
    Point p = {1, 2};
    auto [x, y] = p;
    cout << x << " " << y << endl;
}