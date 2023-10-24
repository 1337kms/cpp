#include "class.hpp"

Contact::Contact()
{

}

void Contact::setFirstName(std::string firstname)
{
	std::cout << "Veuillez entrer un prénom : ";
	std::cin >> firstname;

	if (islower(firstname[0])
		firstname[0] = toupper(firstname[0]);
	for (int i = 1 ; i < firstname.length() ; i++)
	{
		if (isupper(firstname[i])
			firstname[i] = tolower(firstname[i]);
	}
	this->firstname = firstname;
}

void Contact::setLastName(std::string lastname)
{
	std::cout << "Veuillez entrer un nom : ";
	std::cin >> lastname;

	if (islower(lastname[0])
		lastname[0] = toupper(lastname[0]);
	for (int i = 1 ; i < lastname.length() ; i++)
	{
		if (isupper(lastname[i])
				lastname[i] = tolower(lastname[i]);
	}
	this->lastname = lastname;
}

void Contact::setNickname(std::string nickname)
{
	std::cout << "Veuillez entrer un pseudo : ";
	std::cin >> nickname;
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
	std::cout << "Veuillez entrer un numéro de téléphone : ";
	std::cin >> phonenumber;
	for (int i = 0 ; i < phonenumber.length() ; i++)
	{
		if (!isdigit(phonenumber[i])
		{
			std::cout << "Numéro de téléphone invalide." << std::endl;
			return setPhoneNumber();
		}
	}
	this->phonenumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret)
{
	std::cout << "Veuillez entrer votre secret le plus sombre : ";
	std::cin >> darkestsecret;
	this->darkestsecret = darkestsecret;
}
