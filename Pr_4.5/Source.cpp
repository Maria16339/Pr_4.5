#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	 
	for (int i = 0; i < 10; i++)
	{
		x = -R + (R + R) * rand() / RAND_MAX;
		y = -R + (R + R) * rand() / RAND_MAX;
		if (y = sqrt(R * R - x * x) || y >= -R && y <= x)
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
