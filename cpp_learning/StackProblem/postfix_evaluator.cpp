#include <iostream>
#include <stack>
#include <string>
#include <cctype> // for isdigit
#include <stdexcept> // for exceptions
#include "postfix_evaluator.h"

// Function to evaluate a given postfix expression
double PostfixEvaluator::evaluatePostfix(const std::string& expression) {
    std::stack<double> operandStack;

    for (char ch : expression) {
        if (std::isspace(ch)) {
            // Skip whitespace characters
            continue;
        }
        else if (std::isdigit(ch)) {
            // Convert the character to a digit and push onto the stack
            operandStack.push(ch - '0');
        }
        else if (isOperator(ch)) {
            // Pop the top two operands from the stack
            if (operandStack.size() < 2) {
                throw std::runtime_error("Invalid postfix expression");
            }
            double operand2 = operandStack.top();
            operandStack.pop();
            double operand1 = operandStack.top();
            operandStack.pop();

            // Perform the operation and push the result onto the stack
            double result = performOperation(operand1, operand2, ch);
            operandStack.push(result);
        }
        else {
            throw std::runtime_error("Invalid character in expression");
        }
    }

    // The result should be the only value remaining in the stack
    if (operandStack.size() != 1) {
        throw std::runtime_error("Invalid postfix expression");
    }

    return operandStack.top();
}

// Helper function to check if a character is an operator
bool PostfixEvaluator::isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

// Helper function to perform the operation between two operands
double PostfixEvaluator::performOperation(double operand1, double operand2, char operation) {
    switch (operation) {
    case '+': return operand1 + operand2;
    case '-': return operand1 - operand2;
    case '*': return operand1 * operand2;
    case '/':
        if (operand2 == 0) throw std::runtime_error("Division by zero");
        return operand1 / operand2;
    default: throw std::runtime_error("Invalid operator");
    }
}
