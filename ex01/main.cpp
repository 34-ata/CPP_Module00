#include "phonebook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) 
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break ;
        }
        if (command == "ADD")
        {
            phoneBook.addContact();
            if (std::cin.eof())
                break ;
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContacts();
            if (std::cin.eof())
            {
                std::cout << std::endl;
                break ;
            }
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}
