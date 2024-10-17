#ifndef POSTFIX_EVALUATOR_H
#define POSTFIX_EVALUATOR_H

#include <string>
#include <stack>

// Class declaration for PostfixEvaluator
class PostfixEvaluator {
public:
    // Function to evaluate a given postfix expression
    double evaluatePostfix(const std::string& expression);

private:
    // Helper function to check if a character is an operator
    bool isOperator(char ch);

    // Helper function to perform the operation between two operands
    double performOperation(double operand1, double operand2, char operation);
};

#endif // POSTFIX_EVALUATOR_H
