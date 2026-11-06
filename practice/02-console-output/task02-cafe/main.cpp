#include <iostream>
#include <string>

int main() 
{
    
    std::string customer;
    std::string dish;

    std::cout << "Customer: ";
    std::getline(std::cin, customer);
    std::cout << "Dish: ";
    std::getline(std::cin, dish);

    const double pricePerPortion = 145.5;   
    int portions = 3;                        
    const double serviceFee = 20.0;          
    bool paid = false;                       

    double subtotal = pricePerPortion * portions;   
    double total = subtotal + serviceFee;           

    std::cout << "\nCAFE ORDER\n";
    std::cout << "Customer: " << customer << "\n";
    std::cout << "Dish: " << dish << "\n";
    std::cout << "Portion price: " << pricePerPortion << " RUB\n";
    std::cout << "Portions: " << portions << "\n";
    std::cout << "Subtotal: " << subtotal << " RUB\n";
    std::cout << "Service fee: " << serviceFee << " RUB\n";
    std::cout << "Total: " << total << " RUB\n";
    std::cout << std::boolalpha;
    std::cout << "Paid: " << paid << "\n";

    return 0;
    
}