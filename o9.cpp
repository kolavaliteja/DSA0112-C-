#include <iostream>
using namespace std;

class Add {
public:
  
    int add(int a, int b) {
        return a + b;
    }

    
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Add obj;

    int intResult = obj.add(10, 20);
    float floatResult = obj.add(5.5f, 3.3f);

    cout << "Sum of integers: " << intResult << endl;
    cout << "Sum of floats: " << floatResult << endl;

    return 0;
}
