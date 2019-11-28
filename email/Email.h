#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>
#include <string>
#include <vector>
#include <ostream>

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
	friend std::ostream& operator<<(std::ostream& os, Email &rhs);

	friend struct CompDateWhoSubject;
	friend struct CompWhoDateSubject;
	friend struct CompSubjectWhoDate;
};

struct CompWhoDateSubject
{
	bool operator()(const Email& lhs, const Email& rhs) {
		if (lhs.name != rhs.name) {
			return lhs.name < rhs.name;
		}
		else if (lhs.date != rhs.date)
		{
			return lhs.date < rhs.date;
		}
		return lhs.subject < rhs.subject;
	};
};

struct CompDateWhoSubject
{
	bool operator()(const Email& lhs, const Email& rhs) {
		if (lhs.date != rhs.date)
		{
			return lhs.date < rhs.date;
		}
		else if (lhs.name != rhs.name)
		{
			return lhs.name < rhs.name;
		}
		return lhs.subject < rhs.subject;
	};
};

struct CompSubjectWhoDate
{
	bool operator()(const Email& lhs, const Email& rhs) {
		if (lhs.subject != rhs.subject)
		{
			return lhs.subject < rhs.subject;
		}
		else if (lhs.name != rhs.name)
		{
			return lhs.name < rhs.name;
		}
		return lhs.date < rhs.date;
	};
};

#endif // EMAIL_H




