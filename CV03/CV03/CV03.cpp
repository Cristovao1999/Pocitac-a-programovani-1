// CV03.cpp : Defines the entry point for the application.
//

#include "CV03.h"

using namespace std;


using namespace std;

int main()
{
    double maxY = DBL_MIN;
    int maxX = INT_MIN;

    for (int x = 10; x <= 20; ++x)
    {
        double y = 5 - 3 * x + 2 * (x - 5) * (x - 5) - (x - 10) * (x - 10) * (x - 10);

        if (y > maxY)
        {
            maxY = y;
            maxX = x;
        }
    }
    printf("Maximun value: %lf at x=%d\n", maxY, maxX);
    return 0;
}

