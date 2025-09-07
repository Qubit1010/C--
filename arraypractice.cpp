#include <iostream>
using namespace std;

// int main() {
//     int ages[5]; // Array to store ages of 5 persons

//     // Input ages
//     cout << "Hello, Enter the ages of 5 persons:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Age of person " << i + 1 << ": ";
//         cin >> ages[i];
//     }

//     // Output ages
//     cout << "\nAges of the persons are:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Person " << i + 1 << ": " << ages[i] << endl;
//     }

//     return 0;
// }

// int main() {
//     int numbers[5];

//     // Input numbers
//     cout << "Enter 5 numbers:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "Number " << i + 1 << ": ";
//         cin >> numbers[i];
//     }

//     // Output numbers in reverse
//     cout << "\nNumbers in reverse order:" << endl;
//     for (int i = 4; i >= 0; i--) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     int arr1[5], arr2[5], sum[5];

//     // Input first array
//     cout << "Enter 5 elements for first array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "arr1[" << i << "]: ";
//         cin >> arr1[i];
//     }

//     // Input second array
//     cout << "\nEnter 5 elements for second array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "arr2[" << i << "]: ";
//         cin >> arr2[i];
//     }

//     // Add arrays and store result in sum[]
//     for (int i = 0; i < 5; i++) {
//         sum[i] = arr1[i] + arr2[i];
//     }

//     // Display result
//     cout << "\nSum of the two arrays:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << "sum[" << i << "] = " << sum[i] << endl;
//     }

//     return 0;
// }


// int main() {
//     int arr[100] = {1, 2, 3, 5, 6};
//     int size = 5; // Current size of the array
//     int element = 4; // Element to be inserted
//     int index = 3; // Position to insert the element

//     // Shift elements to the right to make space for the new element
//     for (int i = size; i > index; i--) {
//         arr[i] = arr[i - 1];
//     }

//     // Insert the new element at the desired position
//     arr[index] = element;
//     size++; // Increase the size of the array

//     // Print the updated array
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }


// int main() {
//     int arr[5] = { 1, 2, 3, 4, 5 };
//     int index = 2; // Index of the element to be deleted
//     int size = 5; // Current size of the array

//     // Shift elements to the left to fill the gap
//     for (int i = index; i < size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     size--; // Decrease the size of the array

//     // Print the updated array
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }

//     return 0;
// }


// int main() {
//     int rows, cols;

//     // Input size of matrix
//     cout << "Enter number of rows: ";
//     cin >> rows;
//     cout << "Enter number of columns: ";
//     cin >> cols;

//     int matrix1[10][10], matrix2[10][10], sum[10][10];

//     // Input first matrix
//     cout << "\nEnter elements of first matrix:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "matrix1[" << i << "][" << j << "]: ";
//             cin >> matrix1[i][j];
//         }
//     }

//     // Input second matrix
//     cout << "\nEnter elements of second matrix:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << "matrix2[" << i << "][" << j << "]: ";
//             cin >> matrix2[i][j];
//         }
//     }

//     // Add matrices
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             sum[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     // Display sum matrix
//     cout << "\nSum of the two matrices:" << endl;
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             cout << sum[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

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
void insertElement(int arr[], int &n, int pos, int value) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];  // shift right
    }
    arr[pos] = value;
    n++;
}

void deleteElement(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];  // shift left
    }
    n--;
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5; // current size

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    insertElement(arr, n, 2, 99); // Insert 99 at position 2
    cout << "After insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    deleteElement(arr, n, 3); // Delete element at position 3
    cout << "After deletion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}