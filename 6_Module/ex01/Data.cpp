
#include "Data.hpp"

Data::Data() : proof("default")
{
	std::cout << "Default Construtor called for Data" << std::endl;
	return ;
}

Data::Data(std::string name) : proof(name)
{
	std::cout << "Default Construtor called for Data" << std::endl;
	return ;
}

Data::~Data()
{
	std::cout << "Destructor called for Data" << std::endl;
	return ;
}

Data::Data(Data &data)
{
	std::cout << "Copy Construtor called for Data" << std::endl;
	(void)data;
	return ;
}

Data& Data::operator=(Data &data)
{
	std::cout << "Assignation operator called for Data" << std::endl;
	(void)data;
	return *this;
}


// MEMBER FUNTIONS

uintptr_t Data::serialize(Data *ptr)
{
    uintptr_t ui_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (ui_ptr);
}

Data* Data::deserialize(uintptr_t raw)
{
    Data *data = reinterpret_cast<Data *>(raw);
	return (data);
}

std::string& Data::getProof(void)
{
	return (proof);
}





