#include <iostream>
#include <fstream>


void    ft_replace(const std::string& file_name, const std::string& s1, const std::string& s2)
{
    

    std::ifstream read_file(file_name.c_str());
    if (!read_file.is_open())
    {
        std::cout << "Error: file not exist" <<std::endl;
        return;
    }

    std::string content;
    std::string line;
    while (getline(read_file, line)) {
        content.append(line);
        if (!read_file.eof())
            content.push_back('\n');
    }

    read_file.close();


    std::string write_file = file_name + ".replace";
    std::ofstream creat_file(write_file.c_str());
    if (!creat_file.is_open())
    {
        std::cout << "Error: file not created" <<std::endl;
        return;
    }
   
    size_t			pos = 0;
    size_t			found;
    while ((found = content.find(s1, pos)) != std::string::npos)
    {
        creat_file << content.substr(pos, found - pos);
        creat_file << s2;
        pos = found + s1.length();
    }
    creat_file << content.substr(pos);
    creat_file.close();
}


int main(int ac, char **av)
{
    (void)av;
    if (ac != 4)
    {
        std::cout << "invalid arg" <<std::endl;
        return (1);
    }
    std::string s1 = av[2];
    if (s1.empty())
    {
        std::cout << "Error: s1 cannot be empty" << std::endl;
        return (1);
    }
    
    ft_replace(av[1], av[2], av[3]);

    return (0);
}
