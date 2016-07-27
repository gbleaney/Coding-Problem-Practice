// Hackerrank Problems.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num) {
	int result = 1;
	for (size_t i = 1; i <= num; i++)
	{
		result *= i;
	}

	return result;
}

int main() {
	int cases = 0;
	cin >> cases;
	for (size_t i = 0; i < cases; i++)
	{
		int width, height;
		cin >> width >> height;

		int vertical = factorial(width) * factorial(height);

		cout << vertical;
	}

	string wait;
	cin >> wait;
}
