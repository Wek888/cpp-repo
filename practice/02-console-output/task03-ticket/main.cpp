#include <iostream>
#include <string>

int main() 
{

    std::string participant;
    std::string event;

    std::cout << "Participant: ";
    std::getline(std::cin, participant);
    std::cout << "Event: ";
    std::getline(std::cin, event);

    const int ticketPrice = 200;   
    int tickets = 3;               
    const int serviceFee = 25;     
    int issued;                  
    bool confirmed = false;        

    int total = ticketPrice * tickets + serviceFee;
    
    int savedIssued = issued;      
    
    std::cout << "\nIT MEETUP TICKET\n";
    std::cout << "Organizer: IT Academy\n";
    std::cout << "Participant: " << participant << "\n";
    std::cout << "Event: \"" << event << "\"\n";
    std::cout << "Ticket price: " << ticketPrice << " RUB\n";
    std::cout << "Tickets: " << tickets << "\n";
    std::cout << "Service fee: " << serviceFee << " RUB\n";
    std::cout << "Total: " << total << " RUB\n";

    std::cout << std::boolalpha;
    std::cout << "Issued before: " << issued << "\n";
    std::cout << "Confirmed before: " << confirmed << "\n";

   
    issued = tickets;     
    confirmed = true;     

    std::cout << "Issued after: " << issued << "\n";
    std::cout << "Confirmed after: " << confirmed << "\n";
    std::cout << "Saved issued: " << savedIssued << "\n";

    return 0;
}