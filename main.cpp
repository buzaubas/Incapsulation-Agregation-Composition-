#include <iostream>
#include "student.h"
#include "teacher.h"
#include "group.h"

using namespace std;

int main()
{
	setlocale(0, "Russian");

	group sep_212;

	sep_212.add_teacher(teacher("Юрий", "Ерофеев", "C++"));
	
	sep_212.add_student(student("Бексултанов", "Динмухаммед"));
	sep_212.add_student(student("Серик", "Бексултан"));

	std::cout << sep_212 << std::endl;



}
