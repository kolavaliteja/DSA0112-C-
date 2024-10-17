#include <iostream>
using namespace std;

class Functor {
public:
    void operator()(int x, int y) {
        cout << "Sum: " << (x + y) << endl;
    }
};

int main() {
    Functor functor;

    functor(10, 20);  

    return 0;
}

