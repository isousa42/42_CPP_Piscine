#ifndef DATA_HPP
# define DATA_HPP

#   include <iostream>
#   include <stdint.h>

class Data {

    private:
        std::string proof;

    public:

        Data();
        ~Data();
        Data(std::string name);
        Data(Data &data);
        Data& operator=(Data &data);

        uintptr_t serialize(Data *ptr);
        Data* deserialize(uintptr_t raw);
        std::string& getProof(void);

};

#endif