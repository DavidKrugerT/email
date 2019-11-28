#pragma once
#include "Email.h"
#include <algorithm>

class MailBox
{
	std::vector<Email> emails;
public:
	MailBox(std::vector<Email> rhs);
	~MailBox();
	void SortWho();
	void SortDate();
	void SortSubject();
	std::vector<Email> getMail() const;
	void writeMail(Email mail);
};

