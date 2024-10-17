#include <iostream>
using namespace std;

class Add {
    int value;

public:
   
    Add(int v = 0) : value(v) {}

 
    Add operator+(const Add& obj) {
        return Add(value + obj.value);  
    }

   
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Add obj1(10), obj2(20); 

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

   
    Add obj3 = obj1 + obj2;

    cout << "Result of obj1 + obj2: ";
    obj3.display();

    return 0;
}

