#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are a secret agent breaking into a secure server room... \n";
    std::cout << "Enter the correct code to continue...\n";

    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "\n";
    std::cout << "- There are 3 numbers in the code\n";
    std::cout << "- The codes add-up to " << CodeSum << "\n";
    std::cout << "- The codes multiply to give " << CodeProduct << "\n";

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC;    
    
    return 0;
}
