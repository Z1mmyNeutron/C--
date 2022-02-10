#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double area, radius;

    cout << "This program calculates the ares of a circle. \n";
    cout << "What is the radius of the circle? ";
    cin >> radius;
    area = pow(radius, 2)*M_PI;
    cout << "The area is " << area << endl;
    return 0;
}