#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define MAX_CONTACTS 8

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    int setContact();
    void displayShort(int index) const;
    void displayFull() const;

private:
    void printField(const std::string &field) const;
};

class PhoneBook {
private:
    Contact contacts[MAX_CONTACTS];
    int currentIndex;
    int contactCount;

public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
};

#endif
