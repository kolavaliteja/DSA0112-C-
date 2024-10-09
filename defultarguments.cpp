#include <iostream>
using namespace std;

int sum(int a, int b, int c = 25, int d = 30) {
    return a + b + c + d;
}

int main() {
    int a, b;

    cout << "Enter the values: ";
    cin >> a >> b;

    int result = sum(a, b);

    cout << "Output: " << result ;

    return 0;
}
