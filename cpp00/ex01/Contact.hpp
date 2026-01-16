#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        const std::string& getFirstname() const;
        const std::string& getLastname() const;
        const std::string& getNickname() const;
        const std::string& getPhonenumber() const;
        const std::string& getDarkestsecret() const;
        void setFirstname(const std::string& firstn);
        void setLastname(const std::string& lastn);
        void setNickname(const std::string& nickn);
        void setPhonenumber(const std::string& phon);
        void setDarkestsecret(const std::string& secret);
};

#endif