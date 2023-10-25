#include "class.hpp"

Contact::Contact()
{

}

void Contact::setFirstName(std::string firstname)
{
	std::cout << "Veuillez entrer un prénom : ";
	std::getline(std::cin, firstname);

	if (islower(firstname[0]))
		firstname[0] = toupper(firstname[0]);
	for (std::string::size_type i = 1 ; i < firstname.size() ; i++)
	{
		if (isupper(firstname[i]))
				firstname[i] = tolower(firstname[i]);
	}
	this->firstname = firstname;
}

void Contact::setLastName(std::string lastname)
{
	std::cout << "Veuillez entrer un nom : ";
	std::getline(std::cin, lastname);

	if (islower(lastname[0]))
		lastname[0] = toupper(lastname[0]);
	for (std::string::size_type i = 1 ; i < lastname.size() ; i++)
	{
		if (isupper(lastname[i]))
				lastname[i] = tolower(lastname[i]);
	}
	this->lastname = lastname;
}

void Contact::setNickname(std::string nickname)
{
	std::cout << "Veuillez entrer un pseudo : ";
	std::getline(std::cin, nickname);
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
	std::cout << "Veuillez entrer un numéro de téléphone : ";
	std::getline(std::cin, phonenumber);
	for (std::string::size_type i = 0 ; i < phonenumber.size() ; i++)
	{
		if (!isdigit(phonenumber[i]))
		{
			std::cout << "Numéro de téléphone invalide." << std::endl;
			return setPhoneNumber(phonenumber);
		}
	}
	this->phonenumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret)
{
	std::cout << "Veuillez entrer votre secret le plus sombre : ";
	std::getline(std::cin, darkestsecret);
	this->darkestsecret = darkestsecret;
}


std::string Contact::getFirstName() const 
{
	return firstname;
}

std::string Contact::getLastName() const 
{
	return lastname;
}

std::string Contact::getNickname() const 
{
	return nickname;
}

std::string Contact::getPhoneNumber() const 
{
	return phonenumber;
}

std::string Contact::getDarkestSecret() const 
{
	return darkestsecret;
}