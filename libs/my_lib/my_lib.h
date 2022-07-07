#ifndef MY_LIB_H
#define MY_LIB_H

#include <iostream>
#include <fstream>
#include <exception>
#include <list>
//#include <math.h>

class Calculator
{
public:

	class Pers
	{
	public:

		Pers(std::string n, int s) : name(n), spending(s)
		{}

		std::string name;
		int spending;
	};

	size_t personCount() const
	{
		return company.size();
	}

	std::list<Pers> company;
};

std::ostream& operator<<(std::ostream &out, const Calculator::Pers &pers)
{
	out << pers.name;
	out << " - ";
	out << pers.spending;
	return out;
}

std::ostream& operator<<(std::ostream &out, const std::list<Calculator::Pers> &comp)
{
	for(const Calculator::Pers &pers : comp) {
		out << pers;
		out << std::endl;
	}
	return out;
}

//std::ifstream

#endif // MY_LIB_H
