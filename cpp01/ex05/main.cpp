#include "Harl.hpp"

int main()
{
    Harl harl_msg;
    harl_msg.complain("ERROR");
    harl_msg.complain("INFO");
    harl_msg.complain("WARNING");
    harl_msg.complain("DEBUG");

}
