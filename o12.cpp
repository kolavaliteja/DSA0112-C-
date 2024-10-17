#include <iostream>
#include <cstring>
using namespace std;

class Concatenator {
public:
  
    string concat(const string& str1, const string& str2) {
        return str1 + str2;
    }

    
    void concat(const char* arr1, const char* arr2, char* result) {
        strcpy(result, arr1);
        strcat(result, arr2);
    }
};

int main() {
    Concatenator concat;

   
    string str1 = "Hello, ";
    string str2 = "World!";
    string stringResult = concat.concat(str1, str2);
    cout << "Concatenated string: " << stringResult << endl;

 
    const char* arr1 = "Good ";
    const char* arr2 = "Morning!";
    char result[50]; 
    concat.concat(arr1, arr2, result);
    cout << "Concatenated character array: " << result << endl;

    return 0;
}
