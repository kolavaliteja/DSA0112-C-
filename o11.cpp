#include <iostream>
using namespace std;

class MaxFinder {
public:
  
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    
    float max(float a, float b) {
        return (a > b) ? a : b;
    }

   
    char max(char a, char b) {
        return (a > b) ? a : b;
    }
};

int main() {
    MaxFinder finder;

    int intMax = finder.max(10, 20);
    float floatMax = finder.max(5.5f, 3.3f);
    char charMax = finder.max('A', 'Z');

    cout << "Maximum of integers: " << intMax << endl;
    cout << "Maximum of floats: " << floatMax << endl;
    cout << "Maximum of characters: " << charMax << endl;

    return 0;
}

