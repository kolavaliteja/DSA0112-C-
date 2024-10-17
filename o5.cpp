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

    Matrix operator*(const Matrix& other) {
        int result[3][3] = {0};
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
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

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Matrix mat1(arr1);
    Matrix mat2(arr2);

    Matrix mat3 = mat1 * mat2;

    mat3.display();

    return 0;
}
