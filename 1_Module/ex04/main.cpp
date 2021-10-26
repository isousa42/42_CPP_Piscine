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

    std::string test;

    //char c;

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
    int pos = 0;
    int save_pos = 0;
    std::string new_str;
    while (std::getline(file, test))
    {
            std::cout << "pos = " << pos << std::endl;

        while ((pos = test.find(s1, save_pos)) >= 0)
        {

            std::cout << "pos = " << pos << std::endl; // pos = 9
            std::cout << "save pos = " << save_pos << std::endl; // pos = 9

            if (pos >= 0 && pos < (int)test.length())
            {
                new_str.append(test.substr(save_pos, pos - save_pos));
                new_str.append(s2);
                save_pos = pos + s1.length();
            }
        }
        if (new_str.empty())
                new_str = test;


        save_pos = 0;
        std::cout << "str = " << new_str << std::endl;
        pos = 0;
        std::cout << "test = " << test << std::endl;
        new_str.erase();
    }






    // {
    //     std::cout << c;
    //     if (c == ' ' || c == '\n')
    //     {
    //         if (str.compare(s1) == 0)
    //         {

    //             new_file << s2;
    //             new_file << c;
    //             str.clear();
    //         }
    //         else
    //         {
    //             new_file << str;
    //             new_file << c;
    //             str.clear();

    //         }
    //     }
    //     else
    //         str.append(1, c);
    // }
    // if (str.compare(s1) == 0)
    // {

    //     new_file << s2;
    //     str.clear();
    // }
    // else
    //     new_file << str;
    new_file.close();
    file.close();

    return (0);
}