#include <iostream>
using namespace std;

class Value {
    int data;

public:
    Value(int d = 0) : data(d) {}

    Value& operator+=(const Value& other) {
        data += other.data;
        return *this;
    }

    void display() const {
        cout << "Value: " << data << endl;
    }
};

int main() {
    Value obj1(10);
    Value obj2(20);

    obj1 += obj2;

    obj1.display();

    return 0;
}

