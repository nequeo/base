// TestNequeo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "FunctionTemplates.h"
#include "FastRandom.h"

int Funct(int a, int b);

int main()
{
	auto ret = Nequeo::FunctionDefinition<int, int, int>(Funct);
	int value = Nequeo::FunctionCall<int>(5, 5, ret);
	std::cout << value << std::endl;

	Nequeo::FastRandom fr(777);
	unsigned short randomNumber = fr.Get();
	unsigned short randomNumber1 = fr.Get();
	unsigned short randomNumber2 = fr.Get();
	std::cout << randomNumber << std::endl;
	std::cout << randomNumber1 << std::endl;
	std::cout << randomNumber2 << std::endl;

	size_t one = 1;
	size_t two = 2;
	size_t three = 3;
	unsigned short randomNumberS = fr.Get(two);
	unsigned short randomNumberS1 = fr.Get(three);
	unsigned short randomNumberS2 = fr.Get(one);
	std::cout << randomNumberS << std::endl;
	std::cout << randomNumberS1 << std::endl;
	std::cout << randomNumberS2 << std::endl;

    return 0;
}

int Funct(int a, int b)
{
	return a * b;
}