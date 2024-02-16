#include <iostream>
using namespace std;
class Base {
    public: 
    Base(){
        cout << "Constructing Base\n";
    }
    virtual ~Base(){
        cout << "Destruction Base\n";
    }
};
class Derived : public Base{
public:
    Derived(){
        cout << "Construct Derived\n";
    }
    ~Derived(){
        cout << "Destroyed Derived\n";
    }
};
int main(){
    Derived *d = new Derived();
    Base *b = d;
    delete b;
    return 0;
}