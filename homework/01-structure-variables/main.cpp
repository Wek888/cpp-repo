#include <iostream>

int main() 
{
    
    int portions = 2;
    int timeMinutes = 5;
    int readyPortions = 0;

    std::cout << "Recipe: Lemon tea with honey\n";
    std::cout << "Portions: " << portions << "\n";
    std::cout << "Time: " << timeMinutes << " min\n";
    std::cout << "Ready before: " << readyPortions << "\n";

    std::cout << "Ingredients:\n";
    std::cout << "- Water\n";
    std::cout << "- Lemon\n";
    std::cout << "- Honey\n";

    std::cout << "Steps:\n";
    std::cout << "1. Boil the water.\n";
    std::cout << "2. Add lemon and honey.\n";
    std::cout << "3. Stir and pour into cups.\n";


    readyPortions = portions;
    std::cout << "Ready after: " << readyPortions << "\n";

    return 0;
    
}