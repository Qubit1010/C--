#include <iostream>
using namespace std;


// create array as an abstract data type
// struct arraypractice
// {
//     int A[10];
//     int size;
//     int length;
// };

// // createArray function
// void createArray(struct arraypractice *arr, int size)
// {
//     arr->size = size;
//     arr->length = 0;
// }

// // display function
// void display(struct arraypractice arr)
// {
//     cout << "Elements are: ";
//     for (int i = 0; i < arr.length; i++)
//         cout << arr.A[i] << " ";
//     cout << endl;
// }   

// // main function
// int main() {
//     struct arraypractice arr;
//     int size;

//     cout << "Enter size of array: ";
//     cin >> size;
//     createArray(&arr, size);

//     // Input elements
//     cout << "Enter number of elements to insert (max " << size << "): ";
//     int n;
//     cin >> n;
//     if (n > size) n = size; // limit to max size

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr.A[i];
//     }
//     arr.length = n; // set the length

//     display(arr); // display the array

//     return 0;
// }   
 

// int main() {
//     int ages[5]; //* Array to store ages of 5 persons

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

int main() {
    int arr[100] = {1, 2, 3, 5, 6};
    int size = 5; // Current size of the array
    int element = 4; // Element to be inserted
    int index = 3; // Position to insert the element

    // Shift elements to the right to make space for the new element
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the desired position
    arr[index] = element;
    size++; // Increase the size of the array

    // Print the updated array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}


int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int index = 2; // Index of the element to be deleted
    int size = 5; // Current size of the array

    // Shift elements to the left to fill the gap
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // Decrease the size of the array

    // Print the updated array
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}


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

// create linear search vs binary search
// linear search is used for unsorted array
// binary search is used for sorted array
void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!" << endl;
}
// binary search
void binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return;
        }
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    cout << "Element not found!" << endl;
}

// sort array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    linearSearch(arr, n, 30); // Linear search for 30
    bubbleSort(arr, n); // Sort the array
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    binarySearch(arr, n, 99); // Binary search for 99
    
    return 0;
}


//* 7. Arrays
// int main() {
//     // 1. Basic integer array
//     int arr1[5] = {10, 20, 30, 40, 50};
//     cout << "Elements of arr1: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;

//     // 2. Array input from user
//     int arr2[3];
//     cout << "Enter 3 numbers: ";
//     for (int i = 0; i < 3; i++) {
//         cin >> arr2[i];
//     }
//     cout << "You entered: ";
//     for (int i = 0; i < 3; i++) {
//         cout << arr2[i] << " ";
//     }
//     cout << endl;

//     // 3. Sum of array elements
//     int sum = 0;
//     for (int i = 0; i < 5; i++) {
//         sum += arr1[i];
//     }
//     cout << "Sum of arr1 elements: " << sum << endl;

//     // 4. Array of strings
//     string fruits[4] = {"Apple", "Banana", "Cherry", "Date"};
//     cout << "Fruit list: ";
//     for (int i = 0; i < 4; i++) {
//         cout << fruits[i] << " ";
//     }
//     cout << endl;

//     // 5. 2D Array (Matrix)
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     cout << "2D Array (Matrix):" << endl;
//     for (int row = 0; row < 2; row++) {
//         for (int col = 0; col < 3; col++) {
//             cout << matrix[row][col] << " ";
//         }
//         cout << endl;
//     }

//     // 6. Find maximum in array
//     int maxVal = arr1[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr1[i] > maxVal) maxVal = arr1[i];
//     }
//     cout << "Maximum value in arr1: " << maxVal << endl;

//     // 

//     return 0; 
// }

// *sizeof array
// int main() {
//     int numbers[] = {10, 20, 30, 40, 50};
//     int size = sizeof(numbers) / sizeof(numbers[0]); // calculate number of elements
//     cout << "Array elements: ";
//     for (int i = 0; i < size; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << "\nArray size: " << size << endl;
//     return 0;
// }

// *for each loop
// int main() {
//     string colors[] = {"Red", "Green", "Blue", "Yellow"};
//     cout << "Colors: ";
//     for (const string color : colors) { // range-based for loop
//         cout << color << " ";
//     }
//     int numbers[] = {10, 20, 30, 40, 50};
//     cout << "Numbers: ";
//     for (const int number : numbers) { // range-based for loop
//         cout << number << " ";
//     }
    
//     cout << endl;
//     return 0;
// }

// *pass array to function
// void printArray(int arr[], int size) {
//     cout << "Array elements: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int data[] = {5, 10, 15, 20, 25};
//     int size = sizeof(data) / sizeof(data[0]);
//     printArray(data, size); // passing array to function
//     return 0;
// }

// *getting values from user function
// void inputArray(int arr[], int size) {
//     cout << "Enter " << size << " numbers: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
// }

// int main() {
//     const int SIZE = 4;
//     int userArr[SIZE];
//     inputArray(userArr, SIZE); // get user input
//     printArray(userArr, SIZE); // print user array
//     return 0;
// }

// *search in array function
// int searchInArray(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) return i; // return index if found
//     }
//     return -1; // return -1 if not found
// }
// int main() {
//     int numbers[] = {10, 20, 30, 40, 50};
//     int size = sizeof(numbers) / sizeof(numbers[0]);
//     int target;
//     cout << "Enter number to search: ";
//     cin >> target;
//     int result = searchInArray(numbers, size, target);
//     if (result != -1) {
//         cout << "Number found at index: " << result << endl;
//         } else {
//             cout << "Number not found in array." << endl;
//         }
//         return 0;
// }

// *check if array is accending order or not
// bool isAscending(int arr[], int size) {
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < arr[i - 1]) return false; // not in ascending order
//     }
//     return true; // in ascending order
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     if (isAscending(arr, size)) {
//         cout << "Array is in ascending order." << endl;
//     } else {
//         cout << "Array is not in ascending order." << endl;
//     }
//     return 0;
// }

// *reverse array function
// void reverseArray(int arr[], int size) {
//     for (int i = 0; i < size / 2; i++) {
//         swap(arr[i], arr[size - i - 1]); // swap elements
//     }
// }
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Original array: ";
//     printArray(arr, size);
//     reverseArray(arr, size);
//     cout << "Reversed array: ";
//     printArray(arr, size);
//     return 0;
// }

// * sort an array function
// void sortArray(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {   // swap if out of order
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {50, 20, 40, 10, 30};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << "Unsorted array: ";
//     printArray(arr, size);
//     sortArray(arr, size);
//     cout << "Sorted array: ";
//     printArray(arr, size);
//     return 0;
// }