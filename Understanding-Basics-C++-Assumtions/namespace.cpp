#include <iostream>
// using namespace std;

using std::cout; // Instead, activate individual element
using std::endl; // Widing namespace as needed

namespace DataTypes {
    int total;
    class LinkedList {
        // Full class Definition
    };
    class Stack {
        // Full class definition
    };

}
namespace AbstractDataTypes {
    class Stack{
        // full class Definition;
    };
    class Queue{
        // full class Definition;
    };
}

// Add entries to the AbstractDatTypes namespace;
namespace AbstractDataTypes {
    int total;
    class Tree {
        // FUll class Definition ...;
    };
}
int main(){
    using namespace AbstractDataTypes; // activate namespace;
    using DataTypes::LinkedList; // activate only LinkedList;
    LinkedList list1;
    Stack stack1;
    total = 5;
    DataTypes::total = 85;
    cout << "total " << total << "\n";
    cout << "Datatype::total " << DataTypes::total << endl;
    cout << endl;
    return 0;
}