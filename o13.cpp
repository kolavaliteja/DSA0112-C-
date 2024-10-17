#include <iostream>
using namespace std;

class Matrix {
    int mat[3][3];

public:
    Matrix(int arr[3][3]) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                mat[i][j] = arr[i][j];
    }

    Matrix operator+(const Matrix& other) {
        int result[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result[i][j] = mat[i][j] + other.mat[i][j];
        return Matrix(result);
    }

    void display() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class Array {
public:
    void sum(const int* arr1, const int* arr2, int* result, int size) {
        for (int i = 0; i < size; i++) {
            result[i] = arr1[i] + arr2[i];
        }
    }
};

int main() {
   
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    Matrix mat1(arr1);
    Matrix mat2(arr2);
    Matrix matSum = mat1 + mat2;

    cout << "Sum of matrices:\n";
    matSum.display();

   
    const int size = 5;
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {5, 4, 3, 2, 1};
    int arrayResult[size];

    Array arrObj;
    arrObj.sum(array1, array2, arrayResult, size);

    cout << "Sum of arrays: ";
    for (int i = 0; i < size; i++) {
        cout << arrayResult[i] << " ";
    }
    cout << endl;

    return 0;
}

