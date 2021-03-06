//============================================================================
// Name        : Ex4.cpp
// Author      : Philippe Boisseau
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

long long factorielle(int n);

int main(void)
{
	for(int i = 5; i >= 1; i--)
	{
		cout << i << " factorielle est : " << factorielle(i) << endl;
	}

	return 0;
}

long long factorielle(int n)
{
	long long result = 1;

	while(n != 0)
	{
		result = result * n;
		n = n - 1;
	}

	return result;
}
