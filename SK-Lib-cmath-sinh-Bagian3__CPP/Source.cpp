// C++ program to demonstrate the
// sinh() function
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	int x = -4;

	double result = sinh(x);
	cout << "sinh(-4) = " << result << endl;

	// x in Degrees
	double xDegrees = 90;
	// convert to radians
	x = xDegrees * 3.14159 / 180;

	result = sinh(x);
	cout << "sinh(90 degrees) = " << result << endl;

	_getch();
	return 0;
}
