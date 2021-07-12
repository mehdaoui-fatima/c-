#include "PhoneBook.hpp"

void    addContact(PhoneBook &phonebook){

    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone;
    std::string  darkest_secret;

    std::cout << "First name:" ;
    std::cin >> first_name;
    std::cout << "Last name: :" ;
    std::cin >> last_name;
    std::cout << "Nickname :" ;
    std::cin >> nickname;
    std::cout << "Phone: " ;
    std::cin >> phone;
    std::cout << "Darkest secret :" ;
    std::cin >> darkest_secret;
    Contact contact = 
    Contact(first_name,last_name, nickname, phone, darkest_secret);
    phonebook.add(contact);      
}

void    searchContact(PhoneBook &phonebook)
{
    int index;

    if(phonebook.size > 0)
    {
        phonebook.printPhoneBook();
        std::cout << "What is the index of the contact you are searching for: ";
        std::cin >> index;
        if (index < phonebook.size)
            phonebook.search(index);
        else
            std::cout << "no matched contact found" << std::endl     ;  
    }
    else
        std::cout << "No contact available yet!" << std::endl;
}

int main()
{
    PhoneBook phonebook = PhoneBook();
    std::string operation;

    std::cout<< "Available operations: "<< "\n";
    std::cout << "ADD : to add a contact" << "\n";
    std::cout << "SEARCH : search for a contact" << "\n";
    std::cout << "EXIT: to quite" <<"\n";
    std::cout << "Welcome to your phoneBook, ";
    while (1)
    {
        std::cout << "what is your operation: ";
        std::cin >> operation;
        if (operation == "ADD")
           addContact(phonebook);
        else if (operation == "SEARCH")
          searchContact(phonebook);
        else if(operation == "EXIT")
            phonebook.exitPhoneBook();
        else 
        {
            std::cout << "no matched command" << "\n";
            continue;
        }      
    }
    return (0);
}