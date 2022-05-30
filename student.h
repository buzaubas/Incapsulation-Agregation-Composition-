#pragma once
#include<iostream>
#include<string>

class student
{
	std::string name;
	std::string surname;
public:
	student(const char* nm, const char* sr);
	std::string get_name();
	std::string get_surname();
	bool equal(const student st);
	friend std::ostream& operator<<(std::ostream& os, const student& st);
};

