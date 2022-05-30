#pragma once
#include <iostream>
#include <vector>
#include "student.h"
#include "teacher.h"

class group
{
	teacher one;
	std::vector<student> mass;
public:
	group();
	group(teacher teach);
	void add_teacher(const teacher tech);
	void change_teacher(teacher teach);
	void add_student(student st);
	void remove_student(student st);
	friend std::ostream& operator<<(std::ostream& os, const group grp);
};


