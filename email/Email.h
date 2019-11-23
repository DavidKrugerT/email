#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>
#include <string>

class Email
{
	std::string subject;
	std::string name;
	std::string date;
public:
	
	Email(std::string, std::string, std::string);
	~Email();
	std::string getName() const;
	std::string getDate() const;
	std::string getSubject() const;


	//friend functions as structs. They want to return 
	friend CompDateWhoSubject;
	friend CompWhoDateSubject;
	friend CompSubjectWhoDate;
	2
};

struct CompWhoDateSubject
{
	bool operator()(const Email& lhs, const Email& rhs) {

	};
};

struct CompDateWhoSubject
{

};

struct CompSubjectWhoDate
{

};











#endif // EMAIL_H




