#include <iostream>

int main() { //all cpp program must have a one and only main function
    int favourite_number; // declare a variable of type int
    
    std::cout << "Enter your favourite number between 1 and 100:" ; // output to console
    std::cin >> favourite_number; // read from the console
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    std::cout << "No really!! ";
    std::cout << favourite_number;
    std::cout << " is my favourite number!" << std::endl;
    
    /* Shorter Solution
     std::cout << "No really!! " << favourite_number << " is my favourite number!" << std::endl;
    */
    return 0;
}
