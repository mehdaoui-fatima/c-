#ifndef PHONEBOOK__H
#define PHONEBOOK__H
#include <iostream>
#include <string>
#include <iomanip> 
#define MAX_WIDTH 10

class Contact {
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact(void){};
    Contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone,  std::string secret);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);
};

class PhoneBook{
    private:
    Contact contacts[8];
    

    public:
    int size;
    PhoneBook(void);
    ~PhoneBook(void);
    void        add(Contact contact);
    void        search(int index);
    void        print(Contact contact);
    void        printPhoneBook();
    void        exitPhoneBook();
};

#endif