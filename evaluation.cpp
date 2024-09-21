
#include <iostream>
#include <stack>
#include <cmath> // For pow function

using namespace std;

int evaluate(char operat, int oper1, int oper2) {
    if (operat == '+') {
        return oper1 + oper2;
    }
    else if (operat == '-') {
        return oper1 - oper2;
    }
    else if (operat == '*') {
        return oper1 * oper2;
    }
    else if (operat == '/') {
        return oper1 / oper2;
    }
    else if (operat == '%') {
        return oper1 % oper2;
    }
    else if (operat == '^') {
        return pow(oper1, oper2);
    }
    return 0; // Add this to ensure all paths return a value
}

int expression1(string exp) {
    stack<int> s;

    for (char ch : exp) { // Use char for loop variable
        // If the character is a digit, push it onto the stack
        if (isdigit(ch)) {
            s.push(ch - '0'); // Convert char to int by subtracting '0'
        }
        // If the character is an operator, pop two elements from the stack and evaluate
        else {
            int oper2 = s.top(); s.pop();
            int oper1 = s.top(); s.pop();
            int result = evaluate(ch, oper1, oper2);
            s.push(result);
        }
    }

    // The last remaining element in the stack is the result
    return s.top();
}

int main() {
    string expression;
    cout<<"Manav Agarwal"<<endl;
    cout<<"AML-1(A)"<<endl;
    cout << "Enter a postfix expression: ";
    cin >> expression;

    int result = expression1(expression);

    cout << "The result of the expression is: " << result << endl;

    return 0;
}