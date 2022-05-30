#include "teacher.h"

teacher::teacher()
{
}

teacher::teacher(const char* nm, const char* sr, const char* sb)
{
	name = nm;
	surname = sr;
	subject = sb;
}

std::string teacher::get_name()
{
	return name;
}

std::string teacher::get_surname()
{
	return surname;
}

std::string teacher::get_subject()
{
	return subject;
}

bool teacher::equal(const teacher teach)
{
	return name == teach.name && surname == teach.surname && subject == teach.subject;
}

std::ostream& operator<<(std::ostream& os, const teacher& teach)
{
	os << "< " << teach.surname << " " << teach.name << ", " << teach.subject << " >";
	return os;
}
