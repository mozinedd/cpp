#include "PhoneBook.hpp"

void    printContact(Contact contacts[])
{
    int i = 0;
    while (i < 8)
    {
        std::cout << "\nContact [" << i << "]" << std::endl;
        std::cout << "First name     : " << contacts[i].getFirstname() << std::endl;
        std::cout << "Last name      : " << contacts[i].getLastname() << std::endl;
        std::cout << "Phone number   : " << contacts[i].getPhonenumber() << std::endl;
        std::cout << "Nickname       : " << contacts[i].getNickname() << std::endl;
        std::cout << "Darkest secret : " << contacts[i].getDarkestsecret() << std::endl;
        i++;
    }
}

PhoneBook::PhoneBook()
{
    counter = 0;
    count_array = 0;
}


bool check_valid_car(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isalnum(str[i]) && !std::isspace(str[i]))
            return (false);
    }
    return (true);
}
bool    check_number_phone(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool check_space(std::string str)
{
    size_t j = 0;
    for (size_t i = 0; i<str.length(); i++)
    {
        if (std::isspace(str[i]))
            j++;
    }
    if (j == str.length())
        return (false);
    return (true);
}


std::string get_contact_info(std::string msg)
{
    std::string str;   
    while (1)
    {
        std::cout << msg;
        if (!std::getline(std::cin, str))
            exit(0);
        if (str.empty())
        {
            std::cout << "try again" << std::endl;
            continue;
        }
        else if (!check_valid_car(str))
        {
            std::cout << "try again" << std::endl;
            continue;
        }
        else if (!check_space(str))
        {
            std::cout << "try again" << std::endl;
            continue;
        }
        return (str);
    }
}

void PhoneBook::add_contact()
{
    Contact con;

    con.setFirstname(get_contact_info("first name :"));
    con.setLastname(get_contact_info("last name :"));
    con.setNickname(get_contact_info("nickname :"));
    while (1)
    {
        std::string check = get_contact_info("phone number :");
        if (!check_number_phone(check))
        {
            std::cout << "try again" << std::endl;
            continue;
        }
        con.setPhonenumber(check);
        break;
    }
    con.setDarkestsecret(get_contact_info("darkest secret :"));
    contacts[counter % 8] = con;
    counter++;
    if (count_array < 8)
        count_array++;
}

std::string new_string(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9)+ ".");
    return (str);
}

void PhoneBook::search_contact()
{
    if (count_array == 0)
    {
        std::cout << "no contacts\n";
        return ;
    }
    std::cout   << std::setw(10) << "index" << "|"
                << std::setw(10) << "first name" << "|"
                << std::setw(10) << "last name" << "|"
                << std::setw(10) << "nickname" << "|" << std::endl;
    for (int i = 0; i < count_array ; i++)
    {
        std::cout   << std::setw(10) << i << "|" 
                    << std::setw(10) << new_string(contacts[i].getFirstname()) << "|"
                    << std::setw(10) << new_string(contacts[i].getLastname()) << "|"
                    << std::setw(10) << new_string(contacts[i].getNickname()) << "|" << std::endl;
    }
    std::string index;
    std::cout << "give me index contact :";
    if (!std::getline(std::cin, index))
        return ;
    if (index.length() > 1 || index.length() <= 0)
    {
        std::cout << "invalid index" << std::endl;
        return ;
    }
    if (index[0] < '0' && index[0] > '7')
    {
        std::cout << "invalid index" << std::endl;
        return ;
    }
    int number = index[0] - '0';
    if (number >= count_array)
    {
        std::cout << "invalid index" << std::endl;
        return ;
    }
    std::cout << "first name : " << contacts[number].getFirstname() << std::endl;
    std::cout << "last name : " << contacts[number].getLastname() << std::endl;
    std::cout << "nickname : " << contacts[number].getNickname() << std::endl;
    std::cout << "phone number : " << contacts[number].getPhonenumber() << std::endl;
    std::cout << "darkest secret : " << contacts[number].getDarkestsecret() << std::endl;
}
