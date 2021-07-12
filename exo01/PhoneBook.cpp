#include "PhoneBook.hpp"

Contact::Contact(std::string first_name, std::string last_name, 
    std::string nickname, std::string phone,  std::string secret){
        Contact::first_name = first_name;
        Contact::last_name = last_name;
        Contact::nickname = nickname;
        Contact::phone_number = phone;
        Contact::darkest_secret = secret;
    return;
}

std::string Contact::getFirstName(void){
    return this->first_name;
}  
std::string Contact::getLastName(void){
    return this->last_name;
} 
std::string Contact::getNickName(void){
    return this->nickname;
} 
std::string Contact::getPhoneNumber(void){
    return this->phone_number;
} 
std::string Contact::getDarkestSecret(void){
    return this->darkest_secret;
} 

PhoneBook::PhoneBook(void){
    this->size = 0;
}

PhoneBook::~PhoneBook(void){
}
                   
void PhoneBook::add(Contact contact)
{
    this->size = (this->size >= 8) ? 8 : this->size + 1;
    this->contacts[this->size - 1] = contact;
}

void PhoneBook::search(int index){
    std::cout << "first name:" <<  contacts[index].getFirstName() << "\n";
    std::cout << "last name:" <<  contacts[index].getLastName() << "\n";
    std::cout << "nickname:" <<  contacts[index].getNickName() << "\n";
    std::cout << "phone:" <<  contacts[index].getPhoneNumber() << "\n";
    std::cout << "darkest secret:" <<  contacts[index].getDarkestSecret() << "\n";
}

std::string   printField(std::string str){
    if(str.length() < 10)
        return (str);
    return(str.substr(0,9).append("."));
}

void    PhoneBook::printPhoneBook()
{
    int i;

    i = 0;
    std::cout << "---------------------------------------------" << "\n";
    std::cout << "|index     |first name|last name |nickname  |" <<"\n";
    while(i < PhoneBook::size)
    {
        std::cout << "|" << i << std::setw(10)<<"|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10);
        std::cout << printField(contacts[i].getNickName()) << "|" << "\n";
        i++;
    }
}

void        PhoneBook::exitPhoneBook()
{
    exit(0);
}                     



















//test

