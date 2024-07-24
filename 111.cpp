#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    // Get array dimensions from user
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    // Declare a 2D array with user-specified dimensions
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    // Get array elements from user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    // Print the array
    cout << "The array you entered is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Calculate the sum of diagonal elements
    int diagonalSum = 0;
    int minDimension = min(rows, cols);
    for (int i = 0; i < minDimension; ++i) {
        diagonalSum += arr[i][i];
    }
    cout << "Sum of diagonal elements: " << diagonalSum << endl;
    return 0;
}

