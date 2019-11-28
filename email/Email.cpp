#include "Email.h"

Email::Email(std::string rhsN, std::string rhsD, std::string rhsS) : subject(rhsS), name(rhsN), date(rhsD)
{

}

Email::~Email()
{

}

std::string Email::getName() const
{
	return name;
}

std::string Email::getDate() const
{
	return date;
}

std::string Email::getSubject() const
{
	return subject;
}

std::ostream& operator<<(std::ostream & os, Email & rhs)
{
	os << rhs.getName() << rhs.getDate() << rhs.getSubject() << '\n';
	return os;
}
