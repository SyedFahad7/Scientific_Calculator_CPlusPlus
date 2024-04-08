#include <iostream>
#include <cmath>
#include <limits>
#include "calculator.h"
#include "additional_functions.h"

void Calculator::run() {
    std::string operation;
    double num1, num2;
    std::cout << "Welcome to the Crazy Calculator!" << std::endl;

    while (true) {
        std::cout << "Choose an operation:" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Exponentiation" << std::endl;
        std::cout << "6. Modulus" << std::endl;
        std::cout << "7. Factorial" << std::endl;
        std::cout << "8. Square Root" << std::endl;
        std::cout << "9. Logarithm" << std::endl;
        std::cout << "10. Sine" << std::endl;
        std::cout << "11. Cosine" << std::endl;
        std::cout << "12. Tangent" << std::endl;
        std::cout << "13. Cube Root" << std::endl;
        std::cout << "14. Exponential" << std::endl;
        std::cout << "15. Ceiling" << std::endl;
        std::cout << "16. Floor" << std::endl;
        std::cout << "17. Absolute Value" << std::endl;
        std::cout << "18. Round" << std::endl;
        std::cout << "19. Quit" << std::endl;
        std::cout << "Enter your choice (1-19): ";
        int choice;
        std::cin >> choice;

        if (choice == 19) {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        if (choice < 1 || choice > 19) {
            std::cout << "Invalid choice! Please enter a number between 1 and 19." << std::endl;
            continue;
        }

        if (choice != 7 && choice != 8 && choice != 9 && choice != 10 && choice != 11 && choice != 12
            && choice != 13 && choice != 14 && choice != 15 && choice != 16 && choice != 17 && choice != 18) {
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
        } else {
            std::cout << "Enter a number: ";
            std::cin >> num1;
        }

        // Clear the input stream
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        double result;
        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    std::cout << "Error: Division by zero!" << std::endl;
                    continue;
                }
                break;
            case 5:
                result = pow(num1, num2);
                break;
            case 6:
                result = fmod(num1, num2);
                break;
            case 7:
                result = factorial(num1);
                break;
            case 8:
                result = squareRoot(num1);
                break;
            case 9:
                result = logarithm(num1, num2);
                break;
            case 10:
                result = sine(num1);
                break;
            case 11:
                result = cosine(num1);
                break;
            case 12:
                result = tangent(num1);
                break;
            case 13:
                result = cbrt(num1);
                break;
            case 14:
                result = exp(num1);
                break;
            case 15:
                result = ceil(num1);
                break;
            case 16:
                result = floor(num1);
                break;
            case 17:
                result = fabs(num1);
                break;
            case 18:
                result = round(num1);
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                continue;
        }

        std::cout << "Result: " << result << std::endl;
    }
}
