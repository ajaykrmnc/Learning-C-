#include <iostream>
using namespace std;
class Parent{
public:
    virtual void sayHello() = 0;
};
class Child : public Parent {
public:
    void sayHello(){
        cout << "Child Class Called" << endl;
    }
};

int main(){
    // Parent Bap;  cannot create a instance of parent class because it cannot be created
    Child Bachha;
    Bachha.sayHello();
    return 0;
}