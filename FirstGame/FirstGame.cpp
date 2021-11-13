#include <iostream>
#include <Windows.h>
#include <ctime>


void PrintIntroduction(int Difficulty);

bool PlayGame(int Difficulty);

int main()
{
    system("Color 0A");

    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    // Loop game until all levels completed
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        
        std::cin.clear(); // Clear any errors
        std::cin.ignore();  //Discards the buffer

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    std::cout << "*** Great work agent! You got all the files! Now get out of there! ***\n";
    
    return 0;
}

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal
    std::cout << "\nYou are a secret agent breaking into a " << Difficulty << " level in secure server room... \n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = (rand() % Difficulty) + Difficulty;
    const int CodeB = (rand() % Difficulty) + Difficulty;
    const int CodeC = (rand() % Difficulty) + Difficulty;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print CodeSum and CodeProduct to the terminal
    std::cout << "- There are 3 numbers in the code\n";
    std::cout << "- The codes add-up to " << CodeSum << "\n";
    std::cout << "- The codes multiply to give " << CodeProduct << "\n";
    
    // Score player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    // Check if the player 
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well done agent! You have extracted a file! Keep going!! ***\n";

        return true;
    }
    else
    {
        std::cout << "\n*** You entered the wrong code! Careful agent! Try again!! ***\n";
        return false;
    }
}