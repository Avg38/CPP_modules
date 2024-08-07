#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("*NoName*"), _grade(50)
{
	std::cout << "A Bureaucrat with the grade " << _grade << " has been created." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	(*this).setGrade(grade);
	std::cout << "A Bureaucrat named " << _name << " and the grade " << _grade << " has been created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "A Copy Bureaucrat named " << _name << " and the grade " << _grade << " has been created." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Copy Bureaucrat named " << _name << " and the grade " << _grade << " has been destroyed." << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	_grade = other._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& other)
{
	os << other.getName() <<", bureaucrat grade " << other.getGrade() << "." << std::endl;
	return (os);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		std::cout << "Bureaucrat " << _name << "has already the highest grade." << std::endl;
	else
	{
		_grade--;
		std::cout << "Bureaucrat " << _name << " has now the grade " << _grade << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		std::cout << "Bureaucrat " << _name << "has already the lowest grade." << std::endl;
	else
	{
		_grade++;
		std::cout << "Bureaucrat " << _name << " has now the grade " << _grade << std::endl;
	}
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLow");
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHigh");
}
