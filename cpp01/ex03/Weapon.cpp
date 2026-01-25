#include "Weapon.hpp"

 const std::string& Weapon::getType()
 {
    return (type);
 }

 void Weapon::setType(const std::string& type)
 {
    this->type = type;
 }

 Weapon::Weapon()
 {
 }

 Weapon::Weapon(std::string t): type(t)
 {
 }
 