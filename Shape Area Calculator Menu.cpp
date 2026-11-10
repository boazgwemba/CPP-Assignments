#include <iostream>

// i. Functions for calculating the area of each shape
double calculateSquareArea(double side) {
    return side * side;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice = 0;

    // iv. The program must not stop running until the user selects choice 4 (Quit)
    while (true) {
        // Displaying the menu exactly as requested
        std::cout << "Please select the area of the shape to calculate\n";
        std::cout << "1. Square\n";
        std::cout << "2. Rectangle\n";
        std::cout << "3. Triangle\n";
        std::cout << "4. Quit Program\n\n";
        std::cout << "Enter selection: ";
        
        std::cin >> choice;
        std::cout << "\n";

        // ii. Handling invalid menu choices
        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cin.clear(); // Clear error state if non-integer was entered
            std::string clearLine;
            std::getline(std::cin, clearLine); // Discard bad input

            std::cout << "Your input was: " << (choice == 0 ? clearLine : std::to_string(choice)) 
                      << " which is an invalid input\n";
            std::cout << "Please enter a valid input!!!\n\n";
            choice = 0; // Reset choice for next loop
            continue;   // Restart from the beginning of the loop
        }

        // Check if user wants to quit
        if (choice == 4) {
            std::cout << "Exiting program. Goodbye!\n";
            break;
        }

        // iii. Ask user for data based on selection and calculate area
        if (choice == 1) {
            double side;
            std::cout << "Enter the side length of the square: ";
            std::cin >> side;
            std::cout << "The area of the square is: " << calculateSquareArea(side) << "\n\n";
        } 
        else if (choice == 2) {
            double length, width;
            std::cout << "Enter the length of the rectangle: ";
            std::cin >> length;
            std::cout << "Enter the width of the rectangle: ";
            std::cin >> width;
            std::cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << "\n\n";
        } 
        else if (choice == 3) {
            double base, height;
            std::cout << "Enter the base of the triangle: ";
            std::cin >> base;
            std::cout << "Enter the height of the triangle: ";
            std::cin >> height;
            std::cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << "\n\n";
        }
    }

    return 0;
}
