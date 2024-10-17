#include <iostream>
using namespace std;

class Subtract {
    int value;

public:
    Subtract(int v = 0) : value(v) {}

    Subtract operator-(const Subtract& obj) {
        return Subtract(value - obj.value);
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Subtract obj1(20), obj2(10);

    Subtract result = obj1 - obj2;

    result.display();

    return 0;
}
