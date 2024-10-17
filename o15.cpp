#include <iostream>
using namespace std;

class FactorialCalculator {
public:
 
    long long factorial(int n) {
        if (n < 0) return -1;
        long long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }

  
    double factorial(float n) {
        if (n < 0) return -1; 
        if (n == 0 || n == 1) return 1; 
        double result = 1;
        for (float i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
};

int main() {
    FactorialCalculator calculator;

    int intNum = 5;
    float floatNum = 5.0;

    long long intFactorial = calculator.factorial(intNum);
    double floatFactorial = calculator.factorial(floatNum);

    cout << "Factorial of " << intNum << ": " << intFactorial << endl;
    cout << "Factorial of " << floatNum << ": " << floatFactorial << endl;

    return 0;
}

