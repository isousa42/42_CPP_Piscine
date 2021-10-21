#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::fstream file;
    std::fstream new_file;
    std::string str;
    std::string name_file;
    char c;

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
    {
        std::cout << "ERROR CREATING FILE" << std::endl;
        return (1);
    }
    while (file.get(c))
    {
        std::cout << c;
        if (c == ' ' || c == '\n')
        {
            if (str.compare(s1) == 0)
            {

                new_file << s2;
                new_file << c;
                str.clear();
            }
            else
            {
                new_file << str;
                new_file << c;
                str.clear();

            }
        }
        else
            str.append(1, c);
    }
    if (str.compare(s1) == 0)
    {

        new_file << s2;
        str.clear();
    }
    else
        new_file << str;
    new_file.close();
    file.close();

    return (0);
}