#include <iostream>
using namespace std;


//* Swap two integers using pointers (no temp variable)
// void swapWithoutTemp(int *a, int *b) {
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// int main() {
//     int x = 10, y = 20;
//     cout << "Before swap: x=" << x << " y=" << y << endl;
//     swapWithoutTemp(&x, &y);
//     cout << "After swap: x=" << x << " y=" << y << endl;
//     return 0;
// }


// //* Reverse a dynamic array using only pointers
// void reverseArray(int *arr, int n) {
//     int *start = arr;
//     int *end = arr + n - 1;

//     while (start < end) {
//         // swap using pointers
//         *start = *start + *end;
//         *end = *start - *end;
//         *start = *start - *end;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int *arr = new int[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) cin >> *(arr + i);

//     reverseArray(arr, n);

//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
//     cout << endl;

//     delete[] arr;
//     return 0;
// }

//* Find largest and smallest using pointer arithmetic
// void findMinMax(int *arr, int n, int &minVal, int &maxVal) {
//     minVal = *arr;
//     maxVal = *arr;

//     for (int *p = arr; p < arr + n; p++) {
//         if (*p < minVal) minVal = *p;
//         if (*p > maxVal) maxVal = *p;
//     }
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int *arr = new int[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) cin >> *(arr + i);

//     int minVal, maxVal;
//     findMinMax(arr, n, minVal, maxVal);

//     cout << "Smallest = " << minVal << ", Largest = " << maxVal << endl;

//     delete[] arr;
//     return 0;
// }


//* Array operations using function pointer
// int sum(int *arr, int n) {
//     int s = 0;
//     for (int *p = arr; p < arr + n; p++) s += *p;
//     return s;
// }

// int average(int *arr, int n) {
//     return sum(arr, n) / n;
// }

// int maximum(int *arr, int n) {
//     int maxVal = *arr;
//     for (int *p = arr; p < arr + n; p++)
//         if (*p > maxVal) maxVal = *p;
//     return maxVal;
// }

// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int *arr = new int[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) cin >> *(arr + i);

//     int choice;
//     cout << "Choose operation: 1.Sum  2.Average  3.Maximum\n";
//     cin >> choice;

//     int (*func)(int*, int);  // function pointer

//     if (choice == 1) func = sum;
//     else if (choice == 2) func = average;
//     else func = maximum;

//     cout << "Result = " << func(arr, n) << endl;

//     delete[] arr;
//     return 0;
// }

//* Sort a dynamic array using pointer arithmetic
    // void sortArray(int *arr, int n) {
    //     for (int *i = arr; i < arr + n - 1; i++) {
    //         for (int *j = arr; j < arr + n - (i - arr) - 1; j++) {
    //             if (*j > *(j + 1)) {
    //                 int temp = *j;
    //                 *j = *(j + 1);
    //                 *(j + 1) = temp;
    //             }
    //         }
    //     }
    // }

    // int main() {
    //     int n;
    //     cout << "Enter size: ";
    //     cin >> n;
    //     int *arr = new int[n];

    //     cout << "Enter elements:\n";
    //     for (int i = 0; i < n; i++) cin >> *(arr + i);

    //     sortArray(arr, n);

    //     cout << "Sorted array: ";
    //     for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
    //     cout << endl;

    //     delete[] arr;
    //     return 0;
    // }


//* Frequency of unique elements (no extra arrays)
void findFrequency(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == INT_MIN) continue; // already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) == *(arr + i)) {
                count++;
                *(arr + j) = INT_MIN; // mark as visited
            }
        }
        cout << *(arr + i) << " appears " << count << " times\n";
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> *(arr + i);

    findFrequency(arr, n);

    delete[] arr;
    return 0;
}
