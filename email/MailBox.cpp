#include "MailBox.h"

MailBox::MailBox(std::vector<Email> rhs) : emails(rhs)
{
}

MailBox::~MailBox()
{
}

void MailBox::SortWho()
{
	return std::sort(emails.begin(), emails.end(), CompWhoDateSubject());
}

void MailBox::SortDate()
{
	return std::sort(emails.begin(), emails.end(), CompDateWhoSubject());

}

void MailBox::SortSubject()
{
	return std::sort(emails.begin(), emails.end(), CompSubjectWhoDate());

}

std::vector<Email> MailBox::getMail() const
{
	return emails;
}

void MailBox::writeMail(Email mail)
{
	emails.push_back(mail);
}
