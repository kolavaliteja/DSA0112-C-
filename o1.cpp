#include <iostream>
using namespace std;

class Increment {
    int value;

public:
   
    Increment(int v) : value(v) {}

    
    Increment& operator++() {
        ++value; 
        return *this;  
    }

    
    Increment operator++(int) {
        Increment temp = *this;  
        value++; 
        return temp; 
    }

  
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Increment obj(5);  

    cout << "Initial value: ";
    obj.display();

   
    ++obj;
    cout << "After prefix ++: ";
    obj.display();

  
    obj++;
    cout << "After postfix ++: ";
    obj.display();

    return 0;
}

