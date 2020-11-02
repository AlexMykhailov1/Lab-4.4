// Lab4.4.cpp
//Михайлов Олександр
//Табуляція функції, заданої графіком
//Варіант 19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xfirst, xlast, R, y, dx;

	cout << "xfirst = "; cin >> xfirst;
	cout << "xlast = "; cin >> xlast;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;

	x = xfirst;
	while (x <= xlast) {
		if (x <= -1)
			y = -x - 1;
		else
			if (x > -1 && x <= 1)
				y = 0;
			else
				if (x > 1 && x <= 1 + 2 * R)
					y = sqrt(R * R - (x - (1 + R)) * (x - (1 + R)));
				else
					y = (-1 / (6 - 2 * R)) * x + (1 + 2 * R) / (6 - 2 * R);
		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;
	
	cin.get();
	return 0;
}
