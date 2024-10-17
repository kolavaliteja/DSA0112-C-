#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    bool operator==(const Rectangle& other) const {
        return (length == other.length && width == other.width);
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2(10, 5);
    Rectangle rect3(7, 3);

    if (rect1 == rect2)
        cout << "rect1 and rect2 are equal" << endl;
    else
        cout << "rect1 and rect2 are not equal" << endl;

    if (rect1 == rect3)
        cout << "rect1 and rect3 are equal" << endl;
    else
        cout << "rect1 and rect3 are not equal" << endl;

    return 0;
}

