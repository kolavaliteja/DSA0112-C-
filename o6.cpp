#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    Array(int a[5]) {
        for (int i = 0; i < 5; i++)
            arr[i] = a[i];
    }

    int& operator[](int index) {
        if (index >= 0 && index < 5)
            return arr[index];
        else {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
    }
};

int main() {
    int values[5] = {10, 20, 30, 40, 50};
    Array array(values);

    cout << "Element at index 2: " << array[2] << endl;

    array[2] = 100;

    cout << "Updated element at index 2: " << array[2] << endl;

    return 0;
}
