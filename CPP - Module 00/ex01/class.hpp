#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

class Contact 
{
	public:
		Contact();

		void setFirstName(std::string firstname);
		void setLastName(std::string lastname);
		void setNickname(std::string nickname);
		void setPhoneNumber(std::string phonenumber);
		void setDarkestSecret(std::string darkestsecret);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;


		void NewContact()
		{
    		std::string input;
			setFirstName(input);
			setLastName(input);
			setNickname(input);
			setPhoneNumber(input);
			setDarkestSecret(input);
		}


	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
};

class PhoneBook
{
	public:
		PhoneBook();

		void addContact();
		void searchContact();

	private:
		Contact contacts[8];
		int currentIndex;
};

#endif
