#include <iostream>
using namespace std;

int main()

{
    double wall = (10 * 8); //feet
    double ceiling = (10 * 10); //feet
    double surface_area = ( (4 * wall) + ceiling); //feet
    double paint_used = 100; //gallons
    cout << "Area of a wall = " << wall;
    cout << "\nArea of the ceiling = " << ceiling;
    cout << "\nArea to paint = " << surface_area;
    cout << "\nGallons of Paint required = " << (surface_area / paint_used);
    cout << "\n"; //to seperate solution from program end in Xcode output
    
    return 0;
}
