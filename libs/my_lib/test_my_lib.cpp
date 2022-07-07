#include <iostream>
#include "gtest/gtest.h"
#include "my_lib.h"
#include "assert.h"

class ProjectTest : public ::testing::Test {};

TEST(ProjectTest, classCalcAndPers_outoperator_nameAndSpending)
{
	Calculator::Pers kirill("kirill", 1000);
	std::cout << kirill << std::endl;
	Calculator::Pers ksenia("ksenia", 500);
	std::cout << ksenia << std::endl;

	std::cout << std::endl;

	std::list<Calculator::Pers> list;
	list.push_back(kirill);
	list.push_back(ksenia);
	list.push_back(kirill);
	list.push_back(ksenia);

	std::cout << list << std::endl;
}
