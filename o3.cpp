#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
  
    Person(string n, int a) : name(n), age(a) {}

   
    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "Name: " << p.name << ", Age: " << p.age;
        return os;
    }
};

int main() {
    Person person1("Alice", 30);  

    cout << person1 << endl;

    return 0;
}

