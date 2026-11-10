#include <iostream>
#include <string>
#include <sstream>

int main() {
    int val = 0;

    while (true) {
        // Prompt the user for an input
        std::cout << "Enter an integer value between 5 and 10\n";
        
        std::string user_input;
        std::getline(std::cin, user_input);

        // i. Validate that the input is a valid representation of an integer
        std::stringstream ss(user_input);
        if (!(ss >> val) || !(ss.eof())) {
            std::cout << "Sorry, you entered an invalid number, please try again\n";
            continue; // Restart the loop to prompt again
        }

        // ii & iii. Ensure that the integer value is between 5 and 10 before exiting
        if (val < 5 || val > 10) {
            std::cout << "You entered " << val << ". Please enter a number between 5 and 10.\n";
        } else {
            // Valid input received, break out of the while loop
            break;
        }
    }

    // iv. Statement after the loop iteration block to confirm acceptance
    std::cout << "Your input value(" << val << ") has been accepted.\n";

    return 0;
}
