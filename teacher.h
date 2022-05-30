#pragma once
#include<iostream>
#include<string>

class teacher
{
	std::string surname;
	std::string name;
	std::string subject;
public:
	teacher();
	teacher(const char* nm, const char* sr, const char* sb);
	std::string get_name();
	std::string get_surname();
	std::string get_subject();
	bool equal(const teacher teach);
	friend std::ostream& operator<<(std::ostream& os, const teacher& teach);
};

