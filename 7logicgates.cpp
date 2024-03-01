#include <iostream>

int main (){

int a, b;
int choice;
bool result;

std::cout << "In this program, the user can select 7 of the logic gates" << std::endl;
std::cout << "The logic gates that you picked will output a value base on the two inputs provided" << std::endl;

std::cout << "Select a logic gate:\n";
    std::cout << "1. AND\n";
    std::cout << "2. OR\n";
    std::cout << "3. NOT\n";
    std::cout << "4. XOR\n";
    std::cout << "5. NAND\n";
    std::cout << "6. NOR\n";
    std::cout << "7. XNOR\n";
    std::cout << "Enter your choice (1-7): ";
    std::cin >> choice;

//Check if choice is [1,7] only

if (!(choice >= 1 && choice <= 7 )){  //if choice is not 1 <= x < 1, then the user will be asked to input a valid choice.
    std::cout << "Invalid choice message";
    return 0;
}

if (choice !=3 ) { //if choice is not 3, then the user will be asked to input two values for a and b.
std::cout << "Enter the first input" << std::endl;
std::cin >> a;
std::cout << "Enter the second input" << std::endl;
std::cin >> b;

} else {

    std::cout << "Enter the input" << std::endl;
    std::cin >> a;
    b = 0; //if the user selects the NOT gate, then the second input will be 0.

}
if (a != 0 && a != 1 || b != 0 && b != 1) { //if a and b is either 1 or 0 , if statement ignored, but if its true for either a or b that is that one of the varibles does not eqaul to 0 or 1, statement is true.
    std::cout << "Invalid inputs, inputs must only be 1 or 0. " << std::endl;
}

if (choice == 1) { //if the user selects the AND gate, then the program will output the result of the AND gate.
    bool result = (a == 1 && b == 1); //if a and b is equal to 1, then the result will be true, else the result will be false.
    if (result) { //if the result is true, then the program will output the result of the AND gate.
        std::cout << "Output of the AND GATE: " << result << std::endl;
    } else { //if the result is false, then the program will output the result of the AND gate.
        std::cout << "Output of the AND GATE: 0" << std::endl;
    }
} else if (choice == 2) { //since choice is not 1, the program will check if choice is 2, if true, the program will output the result of the OR gate.
    bool result = (a == 1 || b == 1); //follows the same logic as the AND gate.
    if (result) { //if the result is true, then the program will output the result of the OR gate.
        std::cout << "Output of the OR GATE: " << result << std::endl;
    } else { //if the result is false, then the program will output the result of the OR gate.
        std::cout << "Output of the OR GATE: 0" << std::endl;
    }
} else if (choice == 3) { //since choice is not 1 or 2, the program will check if choice is 3, if true, the program will output the result of the NOT gate.
    bool result = !(a == 1);
    if (result) {
        std::cout << "Output of the NOT GATE: " << result << std::endl;
    } else {
        std::cout << "Output of the NOT GATE: 0" << std::endl;
    }
} else if (choice == 4) {
    bool result = (a == 1 && b == 0) || (a == 0 && b == 1);
    if (result) {
        std::cout << "Output of the XOR GATE: " << result << std::endl;
    } else {
        std::cout << "Output of the XOR GATE: 0" << std::endl;
    }
} else if (choice == 5) {
    bool result = !(a == 1 && b == 1);
    if (result) {
        std::cout << "Output of the NAND GATE: " << result << std::endl;
    } else {
        std::cout << "Output of the NAND GATE: 0" << std::endl;
    }
} else if (choice == 6) {
    bool result = !(a == 1 || b == 1);
    if (result) {
        std::cout << "Output of the NOR GATE: " << result << std::endl;
    } else {
        std::cout << "Output of the NOR GATE: 0" << std::endl;
    }
} else if (choice == 7) {
    bool result = !((a == 1 && b == 0) || (a == 0 && b == 1));
    if (result) {
        std::cout << "Output of the XNOR GATE: " << result << std::endl;
    } else {
        std::cout << "Output of the XNOR GATE: 0" << std::endl;
    }
}

std::cout << "Thank you for using the program to test the logic gates" << std::endl;
return 0;
}