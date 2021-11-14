#include <iostream>
#include <fstream>

void    ft_replace(std::fstream &file, std::fstream &new_file, std::string s1, std::string s2)
{
    int pos = 0;
    int save_pos = 0;
    std::string new_str;
    std::string test;
    while (std::getline(file, test))
    {
        while ((pos = test.find(s1, save_pos)) >= 0)
        {
            new_str.append(test.substr(save_pos, pos - save_pos));
            new_str.append(s2);
            save_pos = pos + s1.length();
        }
        new_str.append(test.substr(save_pos, pos - save_pos));
        if (new_str.empty())
                new_file << test;
        else
            new_file << new_str;
        save_pos = 0;
        pos = 0;
        new_str.erase();
        if (!file.eof())
            new_file << std::endl;
    }
    return ;
}

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::fstream file;
    std::fstream new_file;
    std::string name_file;

    if (argc != 4)
    {
        std::cout << "ERROR ARGUMENTS" << std::endl;
        return (1);
    }
    name_file = argv[1];
    name_file.append(".replace");
    s1 = argv[2];
    s2 = argv[3];
    file.open(argv[1], std::ios::in);
    if (!file)
    {
        std::cout << "ERROR OPENING FILE" << std::endl;
        return (1);
    }
    new_file.open(name_file, std::ios::out | std::ios::in | std::ios::trunc);
    if (!new_file)
    {
        std::cout << "ERROR CREATING FILE" << std::endl;
        return (1);
    }
    ft_replace(file, new_file, s1, s2);
    new_file.close();
    file.close();

    return (0);
}