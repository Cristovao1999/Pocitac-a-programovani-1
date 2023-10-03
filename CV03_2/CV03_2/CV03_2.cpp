// CV03_2.cpp : Defines the entry point for the application.
//

#include "CV03_2.h"

using namespace std;

int main()
{
	const float rychlost_zvuku = 340; //ms-1
	int cas, vzdalenost;
	

		cout << "Zadej cas: "; cin >> cas;
		vzdalenost = rychlost_zvuku * cas;
		printf("Vzdalednost, kam blesk uhodil je: %d m", vzdalenost);

	return 0;
}
