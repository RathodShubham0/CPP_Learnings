#include <iostream>
#include "postfix_evaluator.h"

int main() {
    PostfixEvaluator evaluator;
    std::string expression;

    // Input postfix expression from user
    std::cout << "Enter a postfix expression (e.g., 53+82-*): ";
    std::cin >> expression;

    try {
        // Evaluate the postfix expression
        double result = evaluator.evaluatePostfix(expression);
        std::cout << "The result of the postfix evaluation is: " << result << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
