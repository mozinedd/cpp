# include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string commande;
    while (1)
    {
        std::cout << "give me commande :";
        if (!std::getline(std::cin, commande))
            break ;
        if (commande == "ADD")
            phonebook.add_contact();
        else if (commande == "SEARCH")
            phonebook.search_contact();
        else if (commande == "EXIT")
            break;
    }
}