#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <cstdlib> 

class PhoneBook
{
    private:
        Contact contacts[8];
        int counter;
        int count_array;
    public:
        void add_contact();
        PhoneBook();
        void search_contact();
        
};

#endif