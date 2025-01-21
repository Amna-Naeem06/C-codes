// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int sum(int a[50][50], int b[50][50], int row, int col) {
    cout << "Sum of matrix a and b" << endl;
    int sum[50][50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << "The sum at index " << i << j << ": " << sum[i][j] << endl;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << sum[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int diff(int a[50][50], int b[50][50], int row, int col) {
    cout << "Difference of matrix a and b" << endl;
    int sub[50][50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sub[i][j] = a[i][j] - b[i][j];
            cout << "The difference at index " << i << j << ": " << sub[i][j] << endl;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << sub[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int prod(int a[50][50], int b[50][50], int row, int col) {
    cout << "Product of matrix a and b" << endl;
    int prod[50][50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            prod[i][j] = a[i][j] * b[i][j];
            cout << "The product at index " << i << j << ": " << prod[i][j] << endl;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << prod[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int sum_matrix1(int a[50][50], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += a[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}

int sum_matrix2(int b[50][50], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += b[i][j];
        }
    }
    cout << sum;
    return 0;
}

int main() {
    int row, col;
    cout << "Enter the size of rows of matrix: ";
    cin >> row;
    cout << "Enter the size of columns of matrix: ";
    cin >> col;

    int a[50][50];
    int b[50][50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the value of matrix1 at index " << i << j << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the value of matrix2 at index " << i << j << ": ";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    sum(a, b, row, col);
    diff(a, b, row, col);
    prod(a, b, row, col);
    sum_matrix1(a, row, col);
    sum_matrix2(b, row, col);

    return 0;
}
