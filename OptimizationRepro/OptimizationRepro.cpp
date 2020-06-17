// OptimizationRepro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	unsigned char a[17];

	for (int i = 0; i < 17; i++) {
		a[i] = i;
	}

	printf("The output should be: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16\r\n");

	unsigned char b[16] = { 0 };

	for (int codelen = 1; codelen <= 16; codelen++)
		b[codelen - 1] = a[codelen];
	/* Not Repro
	for (int codelen = 0; codelen < 16; codelen++)
		b[codelen] = a[codelen + 1];
	*/

	printf("Result: ");

	for (int i = 0; i < 16; i++) {
		printf("%d ", b[i]);
	}

	printf("\r\n");

	return 0;
}
