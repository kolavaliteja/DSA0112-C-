1.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulo: " << num1 % num2 << endl;
    } else {
        cout << "Division and Modulo by zero are not allowed." << endl;
    }
    return 0;
}

2.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}

3.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    float average;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "The average is: " << average << endl;
    return 0;
}

4.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The numbers are not equal." << endl;
    }
    return 0;
}

5.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulo (using fmod): " << fmod(num1, num2) << endl;
    } else {
        cout << "Division and Modulo by zero are not allowed." << endl;
    }
    return 0;
}

6.
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not a valid alphabet letter." << endl;
    }
    return 0;
}

7.
#include <iostream>
using namespace std;
int main() {
    float number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}

8.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << "." << endl;
    } else if (num2 > num1) {
        cout << num2 << " is greater than " << num1 << "." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}

9.
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    int floorValue = floor(number);
    int ceilValue = ceil(number);
    cout << "Floor value: " << floorValue << endl;
    cout << "Ceil value: " << ceilValue << endl;
    int roundedValue = round(number);
    cout << "Rounded to nearest integer: " << roundedValue << endl;
    return 0;
}

10.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Before swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout << "After swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}

11.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int largest = (num1 >= num2 && num1 >= num3) ? num1 :
                  (num2 >= num1 && num2 >= num3) ? num2 : num3;
    cout << "The largest number is: " << largest << endl;
    return 0;
}

12.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    string result = (num1 == num2) ? "The numbers are equal." : "The numbers are not equal.";
    cout << result << endl;
    return 0;
}

13.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    string result = (number % 3 == 0) ? "The number is divisible by 3." : "The number is not divisible by 3.";
    cout << result << endl;
    return 0;
}

14.
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; ++i) {
        cout << i << endl;
    }
    return 0;
}

15.
#include <iostream>
using namespace std;
int main() {
    int number;
    unsigned long long factorial = 1;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }
    return 0;
}

16.
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

17.
#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci series: " << a << " " << b << " ";

    for (int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    return 0;
}

18.

#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
19.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int start, end;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    start = 0;
    end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}

20.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;     
        num /= 10;         
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}

21.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    do {
        if (num1 > num2) {
            num1 = num1 - num2;  
        } else {
            num2 = num2 - num1;
        }
    } while (num1 != num2); 

    gcd = num1;

    cout << "GCD is: " << gcd << endl;

    return 0;
}

22.

#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) sum += i;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isPerfect(num) ? "Perfect number" : "Not a perfect number") << endl;
    return 0;
}

23.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}

24.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if (originalNum % sum == 0)
        cout << originalNum << " is a Harshad number." << endl;
    else
        cout << originalNum << " is not a Harshad number." << endl;

    return 0;
}

25.

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }

    if (num == 1)
        cout << "It is a Happy number." << endl;
    else
        cout << "It is not a Happy number." << endl;

    return 0;
}

26.
#include <iostream>
using namespace std;

int factorial(int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is a Strong number." << endl;
    else
        cout << originalNum << " is not a Strong number." << endl;

    return 0;
}

27.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 7 == 0 || num % 10 == 7)
        cout << num << " is a Buzz number." << endl;
    else
        cout << num << " is not a Buzz number." << endl;

    return 0;
}

28.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int square = num * num;

    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    if (sum == num)
        cout << num << " is a Neon number." << endl;
    else
        cout << num << " is not a Neon number." << endl;

    return 0;
}

29.
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum > num)
        cout << num << " is an Abundant number." << endl;
    else
        cout << num << " is not an Abundant number." << endl;

    return 0;
}

30.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, sum = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, n);
        originalNum /= 10;
    }

    if (sum == num)
        cout << num << " is a Narcissistic number." << endl;
    else
        cout << num << " is not a Narcissistic number." << endl;

    return 0;
}

31.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

32.
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
33.

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = 1;
        for (int j = 0; j < rows - i - 1; j++)
            cout << " ";
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}

34.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

35.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

36.

#include <iostream>
using namespace std;

int main() {
    int n, pos, element;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n+1];  
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;

    if (pos > n+1 || pos < 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos - 1] = element;

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

37.

#include <iostream>
using namespace std;

int main() {
    int n, pos;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position of the element you want to delete: ";
    cin >> pos;

    if (pos > n || pos < 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

38.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}

39.

#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0, avg;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout << "Average of all elements: " << avg << endl;

    return 0;
}

40.

#include <iostream>
#include <limits.h> 
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element." << endl;
    } else {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}



















