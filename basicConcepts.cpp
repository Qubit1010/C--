#include <iostream>  // header file for input/output
using namespace std; // avoid writing std:: again and again

//* 1. Hello World (Basic Syntax)
// int main() {
//     cout << "Hello, World!" << endl;  // output statement
//     return 0;  // program ends successfully
// }

//* 2. Variables and Data Types
// int main() {
//     const double PI = 3.14159; // constant
//     int age = 20;        // integer
//     float height = 5.9;  // decimal
//     char grade = 'A';    // single character
//     string name = "Ali"; // text
//     bool isStudent = true; // true/false

//     cout << "Name: " << name << ", Age: " << age << endl;
//     return 0;
// }

// *namespace 
// namespace firstNamespace {
//     int value = 42;
// }

// namespace secondNamespace {
//     int value = 100;
// }

// int main() {
//     std::cout << "Value from firstNamespace: " << firstNamespace::value << endl;
//     std::cout << "Value from secondNamespace: " << secondNamespace::value << endl;
//     return 0;
// }


// *typedef =
// reserved keyword used to create an additional name (alias) for another data type.
// New identifier for an existing type Helps with readability and reduces typos

// typedef unsigned long int ULong; // ULong is now an alias for unsigned long int 
// int main() {
//     ULong bigNumber = 1234567890;
//     cout << "Big Number: " << bigNumber << endl;
//     return 0;
// }

// text_t is now an alias for string
// using text_t = string; 
// int main() {
//     text_t message = "Hello, Typedef!";
//     cout << message << endl;
//     return 0;
// }


//! parenthesis
//! multiplication & division 
//! addition & subtraction

// *arithematic operators: +, -, *, /, %
// *relational operators: ==, !=, >, <, >=, <=
// *logical operators: &&, ||, ! 
// *bitwise operators: &, |, ^, ~, <<, >>, >>
// *assignment operators: =, +=, -=, *=, /=, %=
// *increment/decrement: ++, --

// int main() {
//     int a = 10, b = 3;

//     // Arithmetic Operators
//     cout << "a + b = " << (a + b) << endl;
//     cout << "a - b = " << (a - b) << endl;
//     cout << "a * b = " << (a * b) << endl;
//     cout << "a / b = " << (a / b) << endl;
//     cout << "a % b = " << (a % b) << endl;

//     // Relational Operators
//     cout << "a == b: " << (a == b) << endl;
//     cout << "a != b: " << (a != b) << endl;
//     cout << "a > b: " << (a > b) << endl;
//     cout << "a < b: " << (a < b) << endl;
//     cout << "a >= b: " << (a >= b) << endl;
//     cout << "a <= b: " << (a <= b) << endl;

//     // Logical Operators
//     bool x = true, y = false;
//     cout << "x && y: " << (x && y) << endl;
//     cout << "x || y: " << (x || y) << endl;
//     cout << "!x: " << (!x) << endl;

//     // Bitwise Operators
//     cout << "a & b = " << (a & b) << endl;
//     cout << "a | b = " << (a | b) << endl;
//     cout << "a ^ b = " << (a ^ b) << endl;
//     cout << "~a = " << (~a) << endl;
//     cout << "a << 1 = " << (a << 1) << endl;
//     cout << "a >> 1 = " << (a >> 1) << endl;

//     // Assignment Operators
//     int c = a;
//     c += b;
//     cout << "c += b: " << c << endl;
//     c -= b;
//     cout << "c -= b: " << c << endl;
//     c *= b;
//     cout << "c *= b: " << c << endl;
//     c /= b;
//     cout << "c /= b: " << c << endl;
//     c %= b;
//     cout << "c %= b: " << c << endl;

//     // Increment/Decrement Operators
//     int d = 5;
//     cout << "d++: " << d++ << endl; // prints 5, then d becomes 6
//     cout << "++d: " << ++d << endl; // d becomes 7, prints 7
//     cout << "d--: " << d-- << endl; // prints 7, then d becomes 6
//     cout << "--d: " << --d << endl; // d becomes 5,

//   return 0;
// }

// *Type Conversion

// int main() {
//     // Implicit conversion (automatic)
//     int i = 42;
//     double d = i; // int to double
//     cout << "Implicit conversion (int to double): " << d << endl;

//     // Explicit conversion (casting)
//     double pi = 3.14159;
//     int intPi = (int)pi; // double to int
//     cout << "Explicit conversion (double to int): " << intPi << endl;

//     // Using static_cast
//     float f = 9.99;
//     int intF = static_cast<int>(f);
//     cout << "static_cast (float to int): " << intF << endl;

//     // Char to int
//     char ch = 'A';
//     int ascii = ch;
//     cout << "Char to int (ASCII value): " << ascii << endl;

//     // Int to string (using to_string)
//     int num = 123;
//     string strNum = to_string(num);
//     cout << "Int to string: " << strNum << endl;

//     // String to int (using stoi)
//     string str = "456";
//     int strToInt = stoi(str);
//     cout << "String to int: " << strToInt << endl;

//     return 0;
// }

// *3. Input from User
// int main() {
//     // Input: Integer
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "You entered age: " << age << endl;

//     // Input: Floating point
//     float height;
//     cout << "Enter your height (in meters): ";
//     cin >> height;
//     cout << "You entered height: " << height << " meters" << endl;

//     // Input: Character
//     char grade;
//     cout << "Enter your grade (A/B/C): ";
//     cin >> grade;
//     cout << "You entered grade: " << grade << endl;

//     // Input: String (single word)
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Hello, " << name << "!" << endl;

//     // Input: String (multiple words)
//     cin.ignore(); // clear input buffer
//     string fullName;
//     cout << "Enter your full name: ";
//     getline(cin, fullName);
//     cout << "Your full name is: " << fullName << endl;

//     // Input: Array of integers
//     int arr[3];
//     cout << "Enter 3 numbers: ";
//     for (int i = 0; i < 3; i++) {
//         cin >> arr[i];
//     }
//     cout << "You entered: ";
//     for (int i = 0; i < 3; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// *math funtions  
// for math functions
// #include <cmath> 

// int main() {
//     double num = 9.0;
//     cout << "Square root of " << num << " is " << sqrt(num) << endl;
//     cout << "Power: 2^3 = " << pow(2, 3) << endl;
//     cout << "Absolute value of -5: " << abs(-5) << endl;
//     cout << "Ceiling of 4.3: " << ceil(4.3) << endl;
//     cout << "Floor of 4.7: " << floor(4.7) << endl;
//     cout << "Round of 4.5: " << round(4.5) << endl;
//     cout << "Max of (3, 7): " << fmax(3, 7) << endl;
//     cout << "Min of (3, 7): " << fmin(3, 7) << endl;
//     return 0;
// }

//* 4. If-Else (Decision Making)
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if (age >= 18) {
//         cout << "You are an adult." << endl;
//     } else {
//         cout << "You are a minor." << endl;
//     }
//     return 0;
// }


//* switch case example
// int main() {
//     int choice;
//     cout << "Enter a number (1-3): ";
//     cin >> choice;

//     switch (choice) {
//         case 1:
//             cout << "You chose option 1." << endl;
//             break;
//         case 2:
//             cout << "You chose option 2." << endl;
//             break;
//         case 3:
//             cout << "You chose option 3." << endl;
//             break;
//         default:
//             cout << "Invalid choice." << endl;
//     }
//     return 0;
// }

//* ternary operator
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     string result = (num % 2 == 0) ? "Even" : "Odd";
//     cout << num << " is " << result << endl;
//     return 0;
// }


//* Temperature Conversion Program
// int main() {
//     char scale;
//     double temp, convertedTemp;
//     cout << "Enter temperature (e.g., 36.5C or 98.6F): ";
//     cin >> temp >> scale;
//     if (scale == 'C' || scale == 'c') {
//         convertedTemp = (temp * 9.0 / 5.0) + 32; // C to F
//         cout << temp << "C is " << convertedTemp << "F" << endl;
//     } else if (scale == 'F' || scale == 'f') {
//         convertedTemp = (temp - 32) * 5.0 / 9.0; // F to C
//         cout << temp << "F is " << convertedTemp << "C" << endl;
//     } else {
//         cout << "Invalid scale. Use 'C' for Celsius or 'F' for Fahrenheit." << endl;
//     }
//     return 0;
// } 

//* String Methods
// int main() {
//     string str = " Hello, World! ";
//     cout << "Original string: '" << str << "'" << endl;
//     cout << "Length: " << str.length() << endl;
//     cout << "Uppercase: " << str.substr(1, str.length()-2) << endl; // removing leading/trailing spaces
//     cout << "Lowercase: " << str.substr(1, str.length()-2) << endl; // removing leading/trailing spaces
//     cout << "Substring (7,5): " << str.substr(7, 5) << endl; // "World"
//     cout << "Find 'World': " << str.find("World") << endl; // index of "World"
//     str.append("!!!");
//     cout << "After append: " << str << endl;
//     str.erase(0, 1); // remove leading space
//     str.erase(str.length()-1, 1); // remove trailing space
//     cout << "After erase: '" << str << "'" << endl;  
//     return 0;
// } 

//* 5. Loops
// int main() {
    // For loop
    // for (int i = 0; i < 5; i++) {
    //     cout << "For loop iteration: " << i << endl;
    // }

    // While loop
    // int j = 1;
    // while (j <= 5) {
    //     cout << "While loop iteration: " << j << endl;
    //     j++;
    // }
    // return 0;

    // Do-While loop
    // int k = 1;
    // do {
    //     cout << "Do-While loop iteration: " << k << endl;
    //     k++;
    // } while (k <= 5);

    // continue and break
    // for (int n = 1; n <= 10; n++) {
    //     if (n % 2 == 0) continue; // skip even numbers
    //     if (n > 7) break;        // stop if n > 7
    //     cout << "Odd number: " << n << endl;
    // }   

    // nested loops
    // for (int row = 1; row <= 3; row++) {
    //     for (int col = 1; col <= 3; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
// }

//* Number Guessing Game
// #include <cstdlib> // for rand() and srand()
// #include <ctime>   // for time()
// int main() {
//     srand(time(0)); // seed random number generator
//     int numberToGuess = rand() % 100 + 1; // random number between 1 and 100
//     int userGuess = 0;
//     int attempts = 0;
//     cout << "Guess the number (1-100): " << endl;
//     while (userGuess != numberToGuess) {
//         cin >> userGuess;
//         attempts++;
//         if (userGuess < numberToGuess) {
//             cout << "Too low! Try again." << endl;
//         } else if (userGuess > numberToGuess) {
//             cout << "Too high! Try again." << endl;
//         } else {
//             cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
//         }
// }       
//     return 0;
// }

//* function definition
// Function to add two numbers
// int add(int a, int b) {
//     return a + b;
// }

// Function to check if a number is even
// bool isEven(int num) {
//     return num % 2 == 0;
// }

// Function to find the maximum of three numbers
// int maxOfThree(int x, int y, int z) {
//     if (x >= y && x >= z)
//         return x;
//     else if (y >= x && y >= z)
//         return y;
//     else
//         return z;
// }

// Function to print a greeting
// void greet(string name) {
//     cout << "Hello, " << name << "!" << endl;
// }

// int main() {
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     // Using add function
//     cout << "Sum of first two numbers: " << add(a, b) << endl;

//     // Using isEven function
//     cout << a << " is " << (isEven(a) ? "Even" : "Odd") << endl;

//     // Using maxOfThree function
//     cout << "Maximum of three numbers: " << maxOfThree(a, b, c) << endl;

//     // Using greet function
//     string userName;
//     cout << "Enter your name: ";
//     cin >> userName;
//     greet(userName);

//     return 0;
// }

// *Variable scope example
// int globalVar = 100; // global variable
// void display() {
//     int localVar = 50; // local variable
//     cout << "Local Variable: " << localVar << endl;
//     cout << "Global Variable: " << globalVar << endl;
// }
// int main() {
//     display();
//     cout << "Accessing Global Variable in main: " << globalVar << endl;
//     // cout << "Accessing Local Variable in main: " << localVar << endl
//     return 0;
// } // Error: localVar not accessible here


// *Banking system program functions
// void deposit(double &balance, double amount) {
//     balance += amount;
//     cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
// }
// void withdraw(double &balance, double amount) {
//     if (amount > balance) {
//         cout << "Insufficient funds!" << endl;
//     } else {
//         balance -= amount;
//         cout << "Withdrew: " << amount << ", New Balance: " << balance << endl;
//     }
// }
// int main() {
//     double balance = 0.0;
//     int choice;
//     double amount;
//     do {
//         cout << "1. Deposit\n2. Withdraw\n3. Exit\nChoose an option: ";
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 deposit(balance, amount);
//                 break;
//             case 2:
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 withdraw(balance, amount);
//                 break;
//             case 3:
//                 cout << "Exiting..." << endl;
//                 break;
//             default:
//                 cout << "Invalid choice!" << endl;
//         }
//     } while (choice != 3);
//     return 0;
// }

// *Rock Paper Scissors Game
// #include <cstdlib> // for rand() and srand()
// #include <ctime>   // for time()
// string getComputerChoice() {
//     int randNum = rand() % 3; // 0, 1, or 2
//     if (randNum == 0) return "Rock";
//     else if (randNum == 1) return "Paper";
//     else return "Scissors";
// }
// string determineWinner(string userChoice, string computerChoice) {
//     if (userChoice == computerChoice) return "It's a tie!";
//     if ((userChoice == "Rock" && computerChoice == "Scissors") ||
//         (userChoice == "Paper" && computerChoice == "Rock") ||
//         (userChoice == "Scissors" && computerChoice == "Paper")) {
//         return "You win!";
//     } else {
//         return "Computer wins!";
//     }
// }
// int main() {
//     srand(time(0)); // seed random number generator
//     string userChoice;
//     cout << "Enter Rock, Paper, or Scissors: ";
//     cin >> userChoice;
//     string computerChoice = getComputerChoice();
//     cout << "Computer chose: " << computerChoice << endl;
//     cout << determineWinner(userChoice, computerChoice) << endl;
//     return 0;
// }

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
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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

//* fill() example
// int main() {
//     int arr[5];
//     fill(arr, arr + 5, 42); // fill array with 42
//     cout << "Array after fill: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// } 

// * multidimensional array example
// int main() {
//     int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     cout << "3x3 Matrix:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }  

// * Quiz Program
// int main() {
//     string questions[] = {
//         "What is the capital of France?",
//         "What is 2 + 2?",
//         "What is the largest planet in our solar system?"
//     };
//     string options[][4] = {
//         {"A) Berlin", "B) Madrid", "C) Paris", "D) Rome"},
//         {"A) 3", "B) 4", "C) 5", "D) 6"},
//         {"A) Earth", "B) Jupiter", "C) Mars", "D) Saturn"}
//     };
//     char answers[] = {'C', 'B', 'B'};
//     char userAnswer;
//     int score = 0;
//     int numQuestions = sizeof(questions) / sizeof(questions[0]);
//     for (int i = 0; i < numQuestions; i++) {
//         cout << questions[i] << endl;
//         for (int j = 0; j < 4; j++) {
//             cout << options[i][j] << endl;
//         }
//         cout << "Your answer: ";
//         cin >> userAnswer;
//         if (toupper(userAnswer) == answers[i]) {
//             score++;
//             cout << "Correct!" << endl;
//         } else {
//             cout << "Wrong! The correct answer is " << answers[i] << endl;
//         }
//         cout << endl;
//     }
//     cout << "Your total score: " << score << " out of " << numQuestions << endl;
//     return 0;
// }

//* memory address example
// int main() {
//     int var = 42;
//     cout << "Value of var: " << var << endl;
//     cout << "Address of var: " << &var << endl; // & gives address
//     return 0;
// }

//* pass by value vs pass by reference
// void passByValue(int num) {
//     num += 10; // modifies local copy
//     cout << "Inside passByValue: " << num << endl;
// }
// void passByReference(int &num) {
//     num += 10; // modifies original variable
//     cout << "Inside passByReference: " << num << endl;
// }
// int main() {
//     int a = 20;
//     cout << "Before passByValue: " << a << endl;
//     passByValue(a);
//     cout << "After passByValue: " << a << endl; // a remains unchanged   
//     cout << "Before passByReference: " << a << endl;
//     passByReference(a);
//     cout << "After passByReference: " << a << endl; // a is modified
//     return 0;
// }

//* pointers = variable that stores a memory address of another vari sometimes it's easier to work with an address 11
//* & address-of operator
//* * dereference operator

//* 8. Basic Pointer Example
// int main() {
//     int x = 10;        // normal variable
//     int *ptr = &x;     // pointer storing address of x

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Pointer (ptr): " << ptr << endl;
//     cout << "Value via pointer (*ptr): " << *ptr + 1 << endl;

//     return 0;
// }

// * pointer arithmetic
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr; // points to first element
//     cout << "Array elements using pointer arithmetic: ";
//     for (int i = 0; i < 5; i++) {
//         cout << *(ptr + i) << " "; // access elements
//     }
//     cout << endl;
//     return 0;
// }

// * null pointer
// int main() {
//     int *ptr = nullptr; // null pointer
//     if (ptr == nullptr) {
//         cout << "Pointer is null." << endl;
//     } else {
//         cout << "Pointer is not null." << endl;
//     }
//     return 0;
// }

// Tic Tac Toe Game using pointers
// void printBoard(char *board) {
//     cout << "Current Board:" << endl;
//     for (int i = 0; i < 9; i++) {
//         cout << board[i] << " ";
//         if ((i + 1) % 3 == 0) cout << endl;
//     }
// };
// bool checkWin(char *board, char player) {
//     for (int i = 0; i < 3; i++) {
//         if (board[i * 3] == player && board[i * 3 + 1] == player && board[i * 3 + 2] == player) return true; // rows
//         if (board[i] == player && board[i + 3] == player && board[i + 6] == player) return true; // columns
//     }
//     if (board[0] == player && board[4] == player && board[8] == player) return true; // diagonal
//     if (board[2] == player && board[4] == player && board[6] == player) return true; // diagonal
//     return false;
// }
// int main() {
//     char board[9] = {'1','2','3','4','5','6','7','8','9'};
//     char currentPlayer = 'X';
//     int move;
//     int movesCount = 0;
//     while (movesCount < 9) {
//         printBoard(board);
//         cout << "Player " << currentPlayer << ", enter your move (1-9): ";
//         cin >> move;
//         if (move < 1 || move > 9 || board[move - 1] == 'X' || board[move - 1] == 'O') {
//             cout << "Invalid move. Try again." << endl;
//             continue;
//         }
//         board[move - 1] = currentPlayer; // update board
//         movesCount++;
//         if (checkWin(board, currentPlayer)) {
//             printBoard(board);
//             cout << "Player " << currentPlayer << " wins!" << endl;
//             return 0;
//         }
//         currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // switch player
//     }
//     printBoard(board);
//     cout << "It's a tie!" << endl;
//     return 0;
// }

//* dynamic memory allocation
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int *arr = new int[n]; // dynamically allocate array
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "You entered: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delete[] arr; // free allocated memory
//     return 0;
// }

//* recursion example vs iteration
// int factorial(int n) { // recursive function
//     if (n <= 1) return 1; // base case
//     return n * factorial(n - 1); // recursive case  
// }
// int factorialIterative(int n) { // iterative function
//     int result = 1;
//     for (int i = 2; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }
// int main() {
//     int num;
//     cout << "Enter a number to compute factorial: ";
//     cin >> num;
//     cout << "Factorial (recursive) of " << num << " is " << factorial(num) << endl;
//     cout << "Factorial (iterative) of " << num << " is " << factorialIterative(num) << endl;
//     return 0;
// }

// * Struct 
// In C++, a struct (short for structure) is a user-defined data type that groups together related variables of different data types under a single name. 
// It allows for the creation of composite data types, 
// providing a way to represent more complex entities than what single variables can offer.

// struct example
// struct Point {
//     int x; // x-coordinate
//     int y; // y-coordinate
// };
// int main() {
//     Point p1; // create a Point object
//     p1.x = 10; // assign values
//     p1.y = 20;
//     cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;
//     return 0;
// }

// pass Car struct to function
// struct Car {
//     string brand;
//     string model;
//     int year;
// };

// void displayCarInfo(Car c) {
//     cout << "Car Brand: " << c.brand << ", Model: " << c.model << ", Year: " << c.year << endl;
// }

// int main() {
//     Car myCar;
//     myCar.brand = "Toyota";
//     myCar.model = "Corolla";
//     myCar.year = 2020;
//     displayCarInfo(myCar); // pass struct to function
//     return 0;
// }
//  as reference
// void updateCarYear(Car &c, int newYear) {
//     c.year = newYear; // update year
// }
// int main() {
//     Car myCar = {"Honda", "Civic", 2018};
//     cout << "Before update: ";
//     displayCarInfo(myCar);
//     updateCarYear(myCar, 2022); // pass struct by reference
//     cout << "After update: ";
//     displayCarInfo(myCar);
//     return 0;
// }

// enum example
// enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
// int main() {
//     Day today = Wednesday; // assign enum value
//     if (today == Wednesday) {
//         cout << "It's Wednesday!" << endl;
//     } else {
//         cout << "It's not Wednesday." << endl;
//     }
//     return 0;
// }

//* 9. Classes and Objects (OOP Basics)

//* Object is a fundamental building block representing a real-world entity or a concept within a software system.
// * It is an instance of a class, which acts as a blueprint or template defining the structure and behavior of objects of that type.

//* Constructor is a special method within a class that is automatically invoked when an object (an instance) of that class is created.
//* Its primary purpose is to initialize the newly created object, ensuring it starts in a valid and consistent state. 

//* Constructor overloading in Object-Oriented Programming (OOP) refers to the ability within a class to define multiple constructors,
//*  each with the same name (the class name) but with different parameter lists. This allows for various ways to create and initialize objects of that class.

//* Encapsulation:
//* The bundling of data (attributes) and the methods that operate on that data within a single unit (the object).
//* It hides the internal implementation details of an object from the outside world, exposing only a public interface for interaction. This promotes data security and maintainability.

//* Inheritance:
//* A mechanism where a new class (subclass or derived class) can inherit properties and behaviors from an existing class (superclass or base class).
//* This promotes code reusability and establishes a hierarchical relationship between classes, representing "is-a" relationships (e.g., a "Dog" is-a "Animal").

//* Polymorphism:
//* The ability of an object to take on many forms. It allows objects of different classes to be treated as objects of a common type.
//* This is often achieved through method overriding (where a subclass provides its own implementation of a method inherited from its superclass) or 
//* method overloading (where multiple methods with the same name but different parameters exist within a class).

//* Abstraction:
//* The process of simplifying complex reality by modeling classes based on essential properties and behaviors, while hiding unnecessary details.
//* It focuses on what an object does rather than how it does it, providing a clear and concise interface for interaction. This can be achieved through abstract classes and interfaces.

//* Getters:
//* A getter method is used to retrieve the value of a private or protected attribute of a class.
//* They typically follow a naming convention like get_attributeName() or getAttributeName().
//* Getters allow external code to read the value of an attribute without directly accessing the attribute itself.

//* Setters:
//* A setter method is used to modify or update the value of a private or protected attribute of a class.
//* They typically follow a naming convention like set_attributeName(value) or setAttributeName(value).
//* Setters provide a controlled way to change an attribute's value, often including validation or other logic to ensure data integrity.

// class definition
// class Student {
// public:
//     string name;
//     int age;

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;       // object creation
//     s1.name = "Ali";
//     s1.age = 21;
//     s1.display();

//     return 0;
// }

// create an object and use all of the concepts above commenneted out
// class Person {
// private: // encapsulation
//     string name;
//     int age;
// public:
//     //* default constructor
//     Person() { 
//         name = "Unknown";
//         age = 0;
//     }
//     //* parameterized constructor
//     Person(string n, int a) { 
//         name = n;
//         age = a;
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };
// //* inheritance
// class Employee : public Person {
// private:
//     string company;
// public:
//     //* constructor
//     Employee(string n, int a, string c) : Person(n, a) { 
//         company = c;
//     }
//     //* method overriding
//     void display() { 
//         //* call base class method
//         Person::display(); 
//         cout << "Company: " << company << endl;
//     }
// };
// int main() {
//     Employee emp("John", 30, "TechCorp");
//     //* polymorphism
//     emp.display(); 
//     return 0;
// }

//* Abstract class (Abstraction)
class Shape {
public:
    virtual double area() const = 0; // pure virtual function
    virtual void display() const = 0;
    virtual ~Shape() {} // virtual destructor
};

//* Base class (Encapsulation, Getters/Setters)
class Person {
private:
    string name;
    int age;
public:
    //* Constructors (Constructor Overloading)
    Person() : name("Unknown"), age(0) {}
    Person(string n, int a) : name(n), age(a) {}

    //* Getter and Setter for name
    string getName() const { return name; }
    void setName(const string& n) { name = n; }

    //* Getter and Setter for age
    int getAge() const { return age; }
    void setAge(int a) { age = a; }

    //* Virtual function for Polymorphism
    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

//* Derived class (Inheritance, Method Overriding, Encapsulation)
class Employee : public Person {
private:
    string company;
    double salary;
public:
    //* Constructors
    Employee() : Person(), company("None"), salary(0.0) {}
    Employee(string n, int a, string c, double s) : Person(n, a), company(c), salary(s) {}

    //* Getter and Setter for company
    string getCompany() const { return company; }
    void setCompany(const string& c) { company = c; }

    //* Getter and Setter for salary
    double getSalary() const { return salary; }
    void setSalary(double s) { salary = s; }

    //* Method Overriding (Polymorphism)
    void display() const override {
        Person::display();
        cout << "Company: " << company << ", Salary: $" << salary << endl;
    }
};

//* Derived class from Shape (Abstraction, Polymorphism)
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    void display() const override {
        cout << "Rectangle: width=" << width << ", height=" << height << ", area=" << area() << endl;
    }
};

int main() {
    //* Encapsulation, Getters/Setters
    Person p;
    p.setName("Ali");
    p.setAge(22);
    p.display();

    //* Inheritance, Method Overriding, Getters/Setters
    Employee e("Sara", 28, "TechCorp", 75000);
    e.display();
    e.setSalary(80000);
    cout << "Updated Salary: $" << e.getSalary() << endl;

    //* Polymorphism (base pointer to derived object)
    Person* ptr = &e;
    ptr->display();

    //* Abstraction and Polymorphism with Shape
    Rectangle rect(5, 3);
    Shape* shapePtr = &rect;
    shapePtr->display();

    return  0;
}