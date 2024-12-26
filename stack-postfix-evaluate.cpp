#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char c) {
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Function to evaluate postfix expression
int evaluatePostfix(char postfix[]) {
    stack<int> operands;

    for (int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];

        // If the character is an operand, push it to the stack
        if (c >= '0' && c <= '9') {
            operands.push(c - '0'); // Convert char to int
        } else {
            // Operator encountered, pop two operands
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            int result = 0;
            if (c == '+') {
                result = operand1 + operand2;
            } else if (c == '-') {
                result = operand1 - operand2;
            } else if (c == '*') {
                result = operand1 * operand2;
            } else if (c == '/') {
                result = operand1 / operand2;
            } else if (c == '^') {

                result = 1;
                for (int j = 0; j < operand2; j++) {
                    result *= operand1;
                }
            }
            operands.push(result);
        }
    }

    return operands.top();
}

// Function to convert infix to postfix
void infixToPostfix(const char infix[], char postfix[]) {
    stack<char> operators;
    int k = 0; // Index for postfix array

    for (int i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        // If the character is an operand, add it to postfix
        if (c >= '0' && c <= '9') {
            postfix[k++] = c;
        }
        // If the character is '(', push it to the stack
        else if (c == '(') {
            operators.push('(');
        }
        // If the character is ')', pop and output from the stack until '(' is encountered
        else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix[k++] = operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(') {
                operators.pop();
            }
        }
        // An operator is encountered
        else {
            while (!operators.empty() && precedence(c) <= precedence(operators.top())) {
                postfix[k++] = operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Pop all remaining operators from the stack
    while (!operators.empty()) {
        postfix[k++] = operators.top();
        operators.pop();
    }

    postfix[k] = '\0'; // Null terminate the postfix expression
}

int main() {
    char infix[100], postfix[100];
    cout << "Enter the infix expression: ";
    cin >> infix;

    // Convert infix to postfix
    infixToPostfix(infix, postfix);
    cout << "Postfix expression is: " << postfix << endl;

    // Evaluate the postfix expression
    int result = evaluatePostfix(postfix);
    cout << "Result of evaluation is: " << result << endl;

    return 0;
}
