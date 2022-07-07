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

		Pers()
		{}

		Pers(std::string n, int s) : name(n), spending(s)
		{}

		std::string name;
		int spending;
	};

	size_t personCount() const
	{
		return company.size();
	}

	void readFile(const std::string &fileName)
	{
		std::ifstream input(fileName);

		if(input.is_open()) {

			char symb = '.';
			while(input.get(symb)){

				Calculator::Pers pers;
				std::string str1, str2;
				do {
					str1.push_back(symb);
				} while(input.get(symb) && symb != ' ');

				pers.name = str1;
				str1 = "";

				do {
					str2.push_back(symb);
				} while(input.get(symb) && symb != '\n');

				int sp = atoi(str2.c_str());
				pers.spending = sp;
				str2 = "";

				company.push_back(pers);
			}
		}
		else {
			throw "file not found";
		}

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

#endif // MY_LIB_H
