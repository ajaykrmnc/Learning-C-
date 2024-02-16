#include <iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    void setData(int x, int y){
        a = x;
        b = y;
    }

    friend istream& operator >>(istream&, Complex &);
    friend ostream& operator <<(ostream&, const Complex &);
};

ostream& operator <<(ostream &dout, const Complex &o) {
    dout << o.a << "  " << o.b;
    return dout;
}

istream& operator >>(istream &din, Complex &o){
    din >> o.a >> o.b;
    return din;
}

int main(){
    Complex c1, c2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> c1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> c2;
    cout << c1 << " " << c2 << endl;
    return 0;
}
