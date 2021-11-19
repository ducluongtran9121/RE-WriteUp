#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	double result;
	unsigned int secretNumber;
	do{
	   result = time(0) % 50;
	   result = result / 50.0; 
	}while ( 0.0 == result );
  	for (int i = 0; i < 5; ++i)
		result = result * 3.8 * (1.0 - result);
  	secretNumber = result * 10000;
	cout << secretNumber << endl;
}