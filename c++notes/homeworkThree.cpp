#include <iostream>
#include <stdlib.h>
#include <cmath>



using namespace std;
double diameter;
double radius;
double slice = 14.125;
double pizzaArea;

double personSlices = 4;
double peopleAttending;
double numberOfSlices;
double slicesToOrder;
double pizzaOrder;
int main()
{
    
    cout << "\nHow many people are attending your pizza parts? ";
   cin >> peopleAttending; 
   cout << peopleAttending; 
   
   cout << "\nHow big would you like your pizza to be in inches? "; 
   cin >> diameter; 
   cout << diameter;
   

   //how big is ur pizza
   radius = (diameter / 2);
   
   cout << "\n radius: " << radius;
   
   //how big is ur pizza in square inches
   pizzaArea = 3.14 * (radius * radius);
   
   cout << "\nPizza area: " << pizzaArea;
   
   //pizzas per person 
   double pizzasPerPerson = pizzaArea / (slice * personSlices);
   cout << "\n number of pizzas needed: " << pizzasPerPerson;
   
   pizzaOrder =  peopleAttending / pizzasPerPerson;
   cout << "\nThe number of pizzas needed are: " << round(pizzaOrder) << " " << diameter << " inch pizzas";
   
   //how many slices can you get from this area
   numberOfSlices = pizzaArea / slice;
   
   
   
   //each person attending is eating four slices 
   slicesToOrder = peopleAttending * personSlices;
   
   
   
   

   return 0;
}