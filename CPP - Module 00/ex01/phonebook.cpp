#include "class.hpp"

int main() {
    int numberOfContacts;
    std::cout << "Combien de contacts voulez-vous ajouter ? ";
    std::cin >> numberOfContacts;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            
    Contact contacts[numberOfContacts];

    for (int i = 0; i < numberOfContacts; i++)
    {
        std::cout << "Entrez les informations du contact #" << i + 1 << ":" << std::endl;
        contacts[i].NewContact();
    }
    for (int i = 0; i < numberOfContacts; i++)
    {
        std::cout << "Informations du contact #" << i + 1 << ":" << std::endl;
        std::cout << "Prénom : " << contacts[i].getFirstName() << std::endl;
        std::cout << "Nom : " << contacts[i].getLastName() << std::endl;
        std::cout << "Pseudo : " << contacts[i].getNickname() << std::endl;
        std::cout << "Numéro de téléphone : " << contacts[i].getPhoneNumber() << std::endl;
        std::cout << "Secret le plus sombre : " << contacts[i].getDarkestSecret() << std::endl;
        std::cout << std::endl;
    }
    return 0;
}