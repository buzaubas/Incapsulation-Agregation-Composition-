#include "group.h"
#include <vector>

group::group()
{
}

group::group(teacher teach)
{
	one = teach;
}

void group::add_teacher(const teacher teach)
{
	one = teach;
}

void group::change_teacher(const teacher teach)
{
	one = teach;
}

void group::add_student(student st)
{
	mass.push_back(st);
}

void group::remove_student(student st)
{
	auto size = mass.size();
	std::vector<student> vs;
	for (auto i = 0; i < size; i++)
		if (!mass[i].equal(st))
			vs.push_back(mass[i]);
	mass = vs;
}

std::ostream& operator<<(std::ostream& os, const group grp)
{
	auto size = grp.mass.size();
	os << "< " << "Teacher: " << grp.one << " >" << std::endl;
	os << "< " << "Students: ";
	for (auto i = 0; i < size; i++)
	{
		os << grp.mass[i] << " ";
	}
	os << " >";
	return os;
}
