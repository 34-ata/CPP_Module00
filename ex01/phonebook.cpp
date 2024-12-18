#include "phonebook.hpp"

int Contact::setContact() {
    std::cout << "First Name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    if (firstName == "" || lastName == "" || nickName == "" || phoneNumber == "" || darkestSecret == " ")
    {
        std::cout << "Invalid argument!\n";
        return 1;
    }
    return 0;
}

void Contact::displayShort(int index) const {
    std::cout << "|" << std::setw(10) << index << "|";
    printField(firstName);
    printField(lastName);
    printField(nickName);
    std::cout << std::endl;
}

void Contact::displayFull() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void Contact::printField(const std::string &field) const {
    if (field.length() > 10)
        std::cout << field.substr(0, 9) + ".|";
    else
        std::cout << std::setw(10) << field << "|";
}

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact() {
    if (contacts[currentIndex].setContact() == 1)
        return ;
    currentIndex = (currentIndex + 1) % MAX_CONTACTS;
    if (contactCount < MAX_CONTACTS)
        contactCount++;
}

void PhoneBook::searchContacts() const {
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    if (contactCount == 0)
        return ;
    for (int i = 0; i < contactCount; i++) {
        contacts[i].displayShort(i);
    }
    std::cout << "Enter the index of the contact: ";
    std::string input;
    std::getline(std::cin, input);
    int index = -1;
    std::stringstream(input) >> index;
    if (index >= 0 && index < contactCount) {
        contacts[index].displayFull();
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}