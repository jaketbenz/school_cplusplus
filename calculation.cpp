#include <iostream>
using namespace std;

int main()
{
	double radius = 11;
    double pi = 3.14;
    double sphere_volume = (4.0 / 3.0) * pi * (radius * radius * radius);
	double surface_area = 4 * pi * (radius * radius);
	cout << "Volume = " << sphere_volume;
	cout << "\n Area = " << surface_area;
    cout << "\n";
	return 0;
}
