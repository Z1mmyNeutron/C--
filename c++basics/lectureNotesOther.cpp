#include <iostream>

using namespace std;



int main(){

    double basePayRate = 18.25,
           overtimePayRate = 27.38,
           regularHours = 40.0,
           overtimeHours = 10.0;
    double totalPay, regularWages, overtimeWages;

    //calculate total regular wages
    regularWages = basePayRate * regularHours; 
    overtimeWages = overtimePayRate * overtimeHours;
    totalPay = regularWages + overtimeWages;

    cout << "Your total wages are " << totalPay << endl;

    return 0;
}
