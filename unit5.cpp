1.
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Person {
protected:
    string name;
    double salary;
    
public:
    virtual void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        while (!(cin >> salary) || salary < 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input, please enter a valid salary: ";
        }
    }
    
    virtual void displaydata() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual void bonus() {
        double bonus_amount = salary + (0.10 * salary);
        cout << "Bonus = " << bonus_amount << endl;
    }
};

class Admin : public Person {
public:
    void getdata() override {
        Person::getdata();
    }

    void displaydata() override {
        Person::displaydata();
    }

    void bonus() override {
        Person::bonus();
    }
};

class Account : public Person {
public:
    void getdata() override {
        Person::getdata();
    }

    void displaydata() override {
        Person::displaydata();
    }

    void bonus() override {
        Person::bonus();
    }
};

class Master : public Admin, public Account {
public:
    void getdata() override {
        Admin::getdata();
    }

    void displaydata() override {
        Admin::displaydata();
    }

    void bonus() override {
        Admin::bonus();
    }
};

int main() {
    Master emp;
    
    emp.getdata();
    emp.displaydata();
    emp.bonus();

    return 0;
}

2.
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Shape {
protected:
    double length, breadth, height;

public:
    virtual void getDimensions() {
        cout << "Enter length: ";
        while (!(cin >> length) || length <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input, please enter a valid length: ";
        }
        cout << "Enter breadth: ";
        while (!(cin >> breadth) || breadth <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input, please enter a valid breadth: ";
        }
        cout << "Enter height: ";
        while (!(cin >> height) || height <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input, please enter a valid height: ";
        }
    }
};

class Rectangle : public Shape {
public:
    double calculateArea() {
        return length * breadth;
    }
};

class Cuboid : public Rectangle {
public:
    double calculateVolume() {
        return length * breadth * height;
    }

    void displayResults() {
        cout << "AREA OF RECTANGLE = " << calculateArea() << endl;
        cout << "VOLUME OF RECTANGLE = " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getDimensions();
    cuboid.displayResults();

    return 0;
}

3.
#include <iostream>

using namespace std;

class Number {
protected:
    int M, N, K;

public:
    void getInput() {
        cout << "Enter M: ";
        cin >> M;
        cout << "Enter N: ";
        cin >> N;
        cout << "Enter K: ";
        cin >> K;
    }
};

class Skipper : public Number {
public:
    void printSkippedNumbers() {
        if (M <= N && K > 0) {
            for (int i = M; i <= N; i += (K + 1)) {
                cout << i;
                if (i + (K + 1) <= N) cout << ", ";
            }
        } else if (M >= N && K > 0) {
            for (int i = M; i >= N; i -= (K + 1)) {
                cout << i;
                if (i - (K + 1) >= N) cout << ", ";
            }
        } else {
            cout << "Invalid input. Ensure K > 0 and M != N.";
        }
        cout << endl;
    }
};

int main() {
    Skipper skipper;
    skipper.getInput();
    skipper.printSkippedNumbers();

    return 0;
}

4.
#include <iostream>
#include <string>

using namespace std;

class Grandfather {
protected:
    double property;

public:
    Grandfather(double prop) : property(prop) {}

    double getProperty() {
        return property;
    }
};

class Father : public Grandfather {
public:
    Father(double prop) : Grandfather(prop) {}
};

class Grandson : public Father {
public:
    Grandson(double prop) : Father(prop) {}

    void receiveProperty() {
        if (property > 0) {
            cout << "Received the Property" << endl;
        } else {
            cout << "Invalid property amount" << endl;
        }
    }
};

int main() {
    string input;
    double propAmount;

    cout << "Enter property value: ";
    cin >> input;

    try {
        propAmount = stod(input);
        Grandson g(propAmount);
        g.receiveProperty();
    } catch (exception& e) {
        cout << "Invalid input" << endl;
    }

    return 0;
}

5.
#include <iostream>
#include <vector>

using namespace std;

class Paper {
    vector<int> authors;

public:
    Paper(vector<int> authorList) : authors(authorList) {}

    void replaceAuthor(int notWorkedAuthor, int newAuthor) {
        for (int i = 0; i < authors.size(); i++) {
            if (authors[i] == notWorkedAuthor) {
                authors[i] = newAuthor;
                cout << "Author No. " << notWorkedAuthor << " is removed from the paper.... and 5th author inserted...." << endl;
                break;
            }
        }
    }

    void displayAuthors() {
        cout << "Current authors: ";
        for (int author : authors) {
            cout << author << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> authorList = {1, 2, 3, 4};
    Paper paper(authorList);

    int notWorkedAuthor, newAuthor = 5;
    cout << "Enter the author number who didn't work: ";
    cin >> notWorkedAuthor;

    paper.replaceAuthor(notWorkedAuthor, newAuthor);
    paper.displayAuthors();

    return 0;
}

medium

1.
#include <iostream>

class AddAmount {
protected:
    int amount;

public:
    AddAmount() {
        amount = 50;
    }

    void displayAmount() const {
        std::cout << "Total amount in Piggie Bank: $" << amount << std::endl;
    }
};

class AddToAmount : public AddAmount {
public:
    AddToAmount(int addAmount) {
        amount += addAmount;  // Add additional amount to the base amount
    }
};

int main() {
    AddAmount baseBank;
    std::cout << "Base Bank:" << std::endl;
    baseBank.displayAmount();

    AddToAmount derivedBank(90);  // Adding $30 to the initial $50
    std::cout << "Derived Bank (with additional amount):" << std::endl;
    derivedBank.displayAmount();

    return 0;
}


3.
#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int emp_id;
    double basic_salary;

public:
    Employee(std::string emp_name, int id, double salary) 
        : name(emp_name), emp_id(id), basic_salary(salary) {}
};

class Payroll : public Employee {
    double gross_salary;
    double net_salary;

public:
    Payroll(std::string emp_name, int id, double salary) 
        : Employee(emp_name, id, salary) {
        calculatePay();
    }

    void calculatePay() {
        double hra = 0.2 * basic_salary;
        double da = 0.1 * basic_salary;
        gross_salary = basic_salary + hra + da;
        double tax = 0.05 * gross_salary;
        net_salary = gross_salary - tax;
    }

    void display() const {
        std::cout << "Employee Name: " << name << "\nEmployee ID: " << emp_id
                  << "\nBasic Salary: $" << basic_salary 
                  << "\nGross Salary: $" << gross_salary 
                  << "\nNet Salary: $" << net_salary << std::endl;
    }
};

int main() {
    Payroll employee("John Doe", 101, 5000);
    employee.display();
    return 0;
}


hard

1.
#include <iostream>

class IncomeTax {
protected:
    double income;
    double tax;

public:
    IncomeTax(double inc) {
        income = inc;
        tax = 0;
    }
    virtual void TDS() = 0;

    void displayTax() const {
        std::cout << "Income: $" << income << "\nTax: $" << tax << std::endl;
    }
};

class Slab1 : public IncomeTax {
public:
    Slab1(double inc) : IncomeTax(inc) {}

    void TDS() override {
        tax = (income > 150000 && income <= 300000) ? 0.1 * income : 0;
    }
};

class Slab2 : public IncomeTax {
public:
    Slab2(double inc) : IncomeTax(inc) {}

    void TDS() override {
        tax = (income > 300000 && income <= 500000) ? 0.2 * income : 0;
    }
};

class Slab3 : public IncomeTax {
public:
    Slab3(double inc) : IncomeTax(inc) {}

    void TDS() override {
        tax = (income > 500000) ? 0.3 * income : 0;
    }
};

int main() {
    double income;
    std::cout << "Enter income: ";
    std::cin >> income;

    IncomeTax* taxCalculator;

    if (income <= 150000) {
        taxCalculator = new Slab1(income);
    } else if (income <= 300000) {
        taxCalculator = new Slab1(income);
    } else if (income <= 500000) {
        taxCalculator = new Slab2(income);
    } else {
        taxCalculator = new Slab3(income);
    }

    taxCalculator->TDS();
    taxCalculator->displayTax();
    delete taxCalculator;

    return 0;
}

