#include "class.hpp"

int main() {
    Contact contact;

    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    // Utilisation des setters pour demander des informations à l'utilisateur
    contact.setFirstName(firstName);
    contact.setLastName(lastName);
    contact.setNickname(nickname);
    contact.setPhoneNumber(phoneNumber);
    contact.setDarkestSecret(darkestSecret);

    // Utilisation des getters pour afficher les informations
    std::cout << "Informations du contact :" << std::endl;
    std::cout << "Prénom : " << contact.getFirstName() << std::endl;
    std::cout << "Nom : " << contact.getLastName() << std::endl;
    std::cout << "Pseudo : " << contact.getNickname() << std::endl;
    std::cout << "Numéro de téléphone : " << contact.getPhoneNumber() << std::endl;
    std::cout << "Secret le plus sombre : " << contact.getDarkestSecret() << std::endl;

    return 0;
}
