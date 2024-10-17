#include <iostream>
using namespace std;

class Printer {
public:
   
    void print(const int* arr, int size) {
        cout << "Integer Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    void print(const double* arr, int size) {
        cout << "Double Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

   
    void print(const char* arr, int size) {
        cout << "Character Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Printer printer;

    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};

    printer.print(intArray, 5);
    printer.print(doubleArray, 5);
    printer.print(charArray, 5);

    return 0;
}

