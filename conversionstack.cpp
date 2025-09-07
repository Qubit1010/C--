//* Infix to Postfix

// #include <iostream>
// #include <stack>
// #include <cctype>   // for isalnum()
// using namespace std;

// Function to return precedence of operators
// int precedence(char op) {
//     if (op == '+' || op == '-') return 1;
//     if (op == '*' || op == '/') return 2;
//     if (op == '^') return 3;
//     return 0;
// }

// // Convert Infix to Postfix
// string infixToPostfix(string infix) {
//     stack<char> st;
//     string postfix = "";

//     for (char ch : infix) {
//         // If operand → add to postfix
//         if (isalnum(ch)) {
//             postfix += ch;
//         }
//         // If ( → push
//         else if (ch == '(') {
//             st.push(ch);
//         }
//         // If ) → pop until (
//         else if (ch == ')') {
//             while (!st.empty() && st.top() != '(') {
//                 postfix += st.top();
//                 st.pop();
//             }
//             st.pop(); // remove '('
//         }
//         // Operator
//         else {
//             while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
//                 postfix += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }

//     // Pop remaining operators
//     while (!st.empty()) {
//         postfix += st.top();
//         st.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix = "A+(B*C-(D/E^F)*G)*H";
//     cout << "Infix: " << infix << endl;
//     cout << "Postfix: " << infixToPostfix(infix) << endl;
//     return 0;
// }



#include <iostream>
#include <stack>
#include <algorithm> // for reverse
using namespace std;

// Check if operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Convert Prefix -> Infix
string prefixToInfix(string prefix) {
    stack<string> st;

    // scan right to left
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char ch = prefix[i];

        if (isOperator(ch)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string exp = "(" + op1 + string(1, ch) + op2 + ")";
            st.push(exp);
        } else {
            st.push(string(1, ch));  // operand
        }
    }
    return st.top();
}

// Convert Prefix -> Postfix
string prefixToPostfix(string prefix) {
    stack<string> st;

    // scan right to left
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char ch = prefix[i];

        if (isOperator(ch)) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string exp = op1 + op2 + ch; // postfix form
            st.push(exp);
        } else {
            st.push(string(1, ch));
        }
    }
    return st.top();
}

// ----------- MAIN ----------
int main() {
    string prefix = "*+AB-CD"; // Example: (A+B)*(C-D)

    cout << "Prefix: " << prefix << endl;
    cout << "Infix: " << prefixToInfix(prefix) << endl;
    cout << "Postfix: " << prefixToPostfix(prefix) << endl;

    return 0;
}
