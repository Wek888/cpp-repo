#include <iostream>
#include <string>

int main() 
{
    
    std::string fullName;
    std::string group;

    std::cout << "Name: ";
    std::getline(std::cin, fullName);
    std::cout << "Group: ";
    std::getline(std::cin, group);

    int age = 16;                 
    double experience = 1.5;      
    bool ready = false;           
    const int lessons = 2;        
    int completed{};              

    int savedCompleted = completed;   

    std::cout << "\nSTUDENT PROFILE\n";
    std::cout << "Name: " << fullName << "\n";
    std::cout << "Group: " << group << "\n";
    std::cout << "Course: C++\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Experience: " << experience << " years\n";
    std::cout << std::boolalpha;
    std::cout << "Ready: " << ready << "\n";
    std::cout << "Lessons: " << lessons << "\n";
    std::cout << "Completed before: " << completed << "\n";
   
    completed = 3;   

    std::cout << "Completed after: " << completed << "\n";
    std::cout << "Saved completed: " << savedCompleted << "\n";

    return 0;
    
}