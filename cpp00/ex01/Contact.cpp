#include "Contact.hpp"

const std::string& Contact::getFirstname() const
{
    return (first_name);
}

const std::string& Contact::getLastname() const
{
    return (last_name);
}

const std::string& Contact::getNickname() const
{
    return (nickname);
}

const std::string& Contact::getPhonenumber() const
{
    return (phone_number);
}

const std::string& Contact::getDarkestsecret() const
{
    return (darkest_secret);
}

void Contact::setFirstname(const std::string& firstn)
{
    first_name = firstn;
}
void Contact::setLastname(const std::string& lastn)
{
    last_name = lastn;
}
void Contact::setNickname(const std::string& nickn)
{
    nickname = nickn;
}
void Contact::setPhonenumber(const std::string& phon)
{
    phone_number = phon;
}
void Contact::setDarkestsecret(const std::string& secret)
{
    darkest_secret = secret;
}
