#include <iostream>
using namespace std;
class Parent{
public:
    void sayHello(){
        cout << "This is parent class" << endl;
    }
};
class Child : public Parent {
public:
    void sayHello(){
        cout << "This is child class" << endl;
    }
};
int main(){
    Child childclass;
    childclass.sayHello(); // method overriding
    childclass.Parent::sayHello(); 
    Parent *parentPtr;
    parentPtr = &childclass;
    parentPtr->sayHello();
}