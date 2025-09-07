#include <iostream>
#include <string>
using namespace std;


// Declare and initialize an array of 10 integers, then print all elements
// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialization

//     cout << "Array elements: ";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Insertion and Deletion in an Array
// void insertElement(int arr[], int &n, int pos, int value) {
//     if (pos < 0 || pos > n) {
//         cout << "Invalid position!\n";
//         return;
//     }
//     for (int i = n; i > pos; i--) {
//         arr[i] = arr[i - 1];  // shift right
//     }
//     arr[pos] = value;
//     n++;
// }

// void deleteElement(int arr[], int &n, int pos) {
//     if (pos < 0 || pos >= n) {
//         cout << "Invalid position!\n";
//         return;
//     }
//     for (int i = pos; i < n - 1; i++) {
//         arr[i] = arr[i + 1];  // shift left
//     }
//     n--;
// }

// int main() {
//     int arr[20] = {10, 20, 30, 40, 50};
//     int n = 5; // current size

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;

//     insertElement(arr, n, 2, 99); // Insert 99 at position 2
//     cout << "After insertion: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;

//     deleteElement(arr, n, 3); // Delete element at position 3
//     cout << "After deletion: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }


// Find the Second Largest Element in a 1D Array
// int main() {
//     int arr[] = {12, 45, 1, 56, 78, 90, 34};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int first = -1e9, second = -1e9; // very small initial values

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > first) {
//             second = first;
//             first = arr[i];
//         } else if (arr[i] > second && arr[i] != first) {
//             second = arr[i];
//         }
//     }

//     cout << "Second largest element = " << second << endl;
//     return 0;
// }

// Find the Row with the Highest Sum in a Matrix
// int main() {
//     int matrix[3][3] = {
//         {3, 2, 1},
//         {4, 5, 6},
//         {9, 2, 8}
//     };

//     int rows = 3, cols = 3;
//     int maxSum = -1e9, rowIndex = -1;

//     for (int i = 0; i < rows; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < cols; j++) {
//             rowSum += matrix[i][j];
//         }
//         if (rowSum > maxSum) {
//             maxSum = rowSum;
//             rowIndex = i;
//         }
//     }

//     cout << "Row with highest sum is row " << rowIndex 
//          << " with sum = " << maxSum << endl;

//     return 0;
// }

// Find the Transpose of a Matrix
int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = 2, cols = 3;

    cout << "Original matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}