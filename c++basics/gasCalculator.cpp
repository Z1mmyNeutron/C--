#include <iostream>
#include <cmath>

using namespace std;

double miles;
double mpg;
double price; 

double calcTrip(double, double, double);


int main()
{
  cout << "Hello World" << endl; 
  cin >> miles;
  cin >> mpg;
  cin >> price;
  cout << "miles: " << miles << " price: " << price << " mpg: " << mpg << endl;
  cout << "the price of the trip is: " << calcTrip(miles, mpg, price);
  
 
  
   
   return 0;
}

double calcTrip(double miles, double  mpg, double price){
    return ((miles/mpg)*price);
    
}
