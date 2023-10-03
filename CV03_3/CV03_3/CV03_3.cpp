// CV03_3.cpp : Defines the entry point for the application.
//

#include "CV03_3.h"

using namespace std;

int main()
{
	int a, b;
	float prumer;

	printf("Zadejte dve cisla a, b:");
	scanf_s("%f, %f", &a, &b);
	prumer = (a + b)/2;
	printf("prumer a/b rovna se; %lf", prumer);
	return 0;
}
