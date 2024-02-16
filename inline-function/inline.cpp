#include <iostream>
using namespace std;

class Operation {
    int a, b, add, sub, mul;
    float div;
public:
    void get();
    void sum();
    void product();
    void difference();
    void division();
};
inline void Operation :: get(){
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter second value";
    cin >> b;
}
inline void Operation :: sum () {
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}
inline void Operation :: difference() {
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << '\n';
}
inline void Operation :: product() {
    mul = a * b;
    cout << "Product of two numbers: " << a * b << '\n';
}
inline void Operation :: division() {
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}
int main() {
     cout << "Program using inline functions\n";
     Operation s;
     s.get();
     s.sum();
     s.difference();
     s.product();
     s.division();
     return 0;
}