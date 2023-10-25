#include "class.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

void PhoneBook::addContact()
{
    contacts[currentIndex].NewContact();
    currentIndex = (currentIndex + 1) % 8;
}

void PhoneBook::searchContact()
{
    std::cout << "_____________________________________________\n";
    std::cout << "|  index   |  prénom  |   nom    |  pseudo  |\n";
    std::cout << "|__________|__________|__________|__________|\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|" << std::right << std::setw(9) << i << " |";
        std::string firstName = contacts[i].getFirstName().length() > 8 ? 
                                contacts[i].getFirstName().substr(0, 7) + "." :
                                contacts[i].getFirstName();
        std::cout << std::right << std::setw(9) << firstName << " |";
        std::string lastName = contacts[i].getLastName().length() > 8 ? 
                               contacts[i].getLastName().substr(0, 7) + "." :
                               contacts[i].getLastName();
        std::cout << std::right << std::setw(9) << lastName << " |";
        std::string nickName = contacts[i].getNickname().length() > 8 ? 
                               contacts[i].getNickname().substr(0, 7) + "." :
                               contacts[i].getNickname();
        std::cout << std::right << std::setw(9) << nickName << " |";

        std::cout << "\n";
    }
    std::cout << "|__________|__________|__________|__________|\n";
}


void exitProgram()
{
    std::cout << "À bientot !" << std::endl;
    exit(0);
}

void display_menu(PhoneBook& phonebook)
{
    while (true)
    {
        std::string input;
        std::cout << "___________________________________\n";
        std::cout << "|                                 |\n";
        std::cout << "|           ~PhoneBook~           |\n";
        std::cout << "|_________________________________|\n";
        std::cout << "|                                 |\n";
        std::cout << "|             1.ADD               |\n";
        std::cout << "|                                 |\n";
        std::cout << "|           2.SEARCH              |\n";
        std::cout << "|                                 |\n";
        std::cout << "|            3.EXIT               |\n";
        std::cout << "|_________________________________|\n";
        std::cout << "\nSelectionnez une commande : ";
        std::getline(std::cin, input);
        for (char& c : input)
        {
           c = std::tolower(c);
        }
        if (input == "1" || input == "add")
        {
            phonebook.addContact();
            return;
        }
        else if (input == "2" || input == "search")
        {
            phonebook.searchContact();
            return;
        } 
        else if (input == "3" || input == "exit")
        {
           exitProgram();
           return;
        }
        else
        {
            std::cout << "Commande inconnue. Veuillez essayer à nouveau.\n";
        }
    }
}

int main()
{
    PhoneBook phonebook;
    while (true)
        display_menu(phonebook);
    return 0;
}