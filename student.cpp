#include "student.h"

student::student(const char* nm, const char* sr)
{
	name = nm;
	surname = sr;
}

std::string student::get_name()
{
	return name;
}

std::string student::get_surname()
{
	return surname;
}

bool student::equal(const student st)
{
	return this->name == st.name && this->surname == st.surname;
}

std::ostream& operator<<(std::ostream& os, const student& st)
{
	os << "< " << st.name << " " << st.surname << " >";
	return os;
}
