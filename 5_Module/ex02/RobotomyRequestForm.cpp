#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default Constructor called for RobotomyRequestForm" << std::endl;
    
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)  : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "Construtor Constructor called for RobotomyRequestForm" << std::endl;
    _target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) : Form("RobotomyRequestForm", 145, 137)
{
    std::cout << "Copy Constructor called for RobotomyRequestForm" << std::endl;
    *this = robotomy;
    return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
    _target = robotomy._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
    return ;
}

void RobotomyRequestForm::action() const
{    
    srand(time(0));
    int x = rand();

    if (x <= RAND_MAX / 2)
        std::cout << " skjfh...a fceqjbf... " << _target << " has been robotomized sucessfully!" << std::endl;
    else
        std::cout << "Robotomy FAILED" << std::endl;
    
    return ;
}