// Under Polymorphism
#include <iostream>
#include <stdio.h>
using namespace std;
class Base{
public:
    void sayHello(){
        cout << "This is Base Class" << endl;
    }
    virtual void virtualSayHello(){
        cout << "This is Base class" << endl;
    }
};
class Child : public Base {
public:
    void virtualSayHello(){
        cout << "This is child class" << endl;
    }
    void sayHello(){
        cout << "This is child class" << endl;
    }
};
int main(){
    Base *baseClassPtr;
    Child childClass;
    baseClassPtr = &childClass;
    baseClassPtr->sayHello();
    baseClassPtr->virtualSayHello();
}